#include "multiCal++.h"


// Calculation functions:
float add(float number1, float number2){
	return number1 + number2;
}


void add_Days_To_Date(unsigned short day, unsigned short month, int year, int daysToAdd)
{
	if(	((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 0 && day < 32)
		|| ((month == 4 || month == 6 || month == 9 || month == 11) && day > 0 && day < 31)
		|| (month == 2 && day > 0 && day < 29 && year % 4 != 0 && year % 400 != 0)
		|| (month == 2 && day > 0 && day < 30 && (year % 4 == 0 || year % 400 == 0))
		) // Input handling
	{
		unsigned short storeDay = day;
		unsigned short storeMonth = month;
		int storeYear = year;
		int storeDaysToAdd = daysToAdd;


		if(daysToAdd >= 0) // If daysToAdd is positive or null...
		{
			for(int i = daysToAdd; i != 0; i--) // ...then compute days
			{
				if(month == 4 || month == 6 || month == 9 || month == 11)  // Handle 30 days months
				{
					if(day == 30)
					{
						day = 1;
						month++;
					}
					else day++;
				}
				else if(month == 2) // Handle februrary (month=2) and leap years
				{
					if(day == 28 && year % 4 != 0 && year % 400 != 0)
					{
						day = 1;
						month++;
					}
					else if(day == 29 && (year % 4 == 0 || year % 100 != 0 || year % 400 == 0))
					{
						day = 1;
						month++;
					}
					else day++;
				}
				else // Handle 31 days months: 1, 3, 5, 7, 8, 10, 12
				{
					if(day == 31)
					{
						if(month == 12) // December case
						{
							day = 1;
							month = 1;
							year++;
						}
						else // All other cases
						{
							day = 1;
							month++;
						}
					}
					else day++;
				}
			}
			cout	<< "\n"
					<< "Calculating "
					<< storeDaysToAdd
					<< " days to "
					<< storeDay
					<< "."
					<< storeMonth
					<< "."
					<< storeYear
					<< " results in: "
					<< day
					<< "."
					<< month
					<< "."
					<< year
					<< "\n"
					<< endl;
		}
		else // If daysToAdd is negative (daysToAdd < 0)
		{
			for(int i = daysToAdd; i != 0; i++) // ...then compute days
			{
				if(month == 4 || month == 6 || month == 9 || month == 11) // Handle 30 days months
				{
					if(day == 1) // Checked: All these month 1 back are always 31 days
					{
						month--;
						day = 31;
					}
					else{day--;}
				}
				else if(month == 2) // Handle februrary (month=2) and leap years
				{
					if(day == 1) // Then go back to january
					{
						day = 31;
						month--;
					}
					else day--;
				}
				else // Handle 31 days months: 1, 3, 5, 7, 8, 10, 12
				{
					if(day == 1)
					{
						if(month == 1) // January case
						{
							day = 31;
							month = 12;
							year--;
						}
						else if(month == 3 && year % 4 != 0 && year % 400 != 0) // March case; no leap year
						{
							day = 28;
							month--;
						}
						else if(month == 3 && (year % 4 == 0 || year % 100 != 0 || year % 400 == 0))  // March case; leap year
						{
							day = 29;
							month--;
						}
						else if(month == 8) // August case
						{
							day = 31;
							month--;
						}
						else  // 30 month cases: may, july, august, october, december
						{
							day = 30;
							month--;
						}
					}
					else day--;
				}
			}
			cout	<< "\n"
					<< "Calculate "
					<< storeDaysToAdd
					<< " days to "
					<< storeDay
					<< "."
					<< storeMonth
					<< "."
					<< storeYear
					<< " results in: "
					<< day
					<< "."
					<< month
					<< "."
					<< year
					<< "\n"
					<< endl;
		}
	}
	else
	{
		cout	<< "Error: Day must be between 1-31 and month must be beetween 1-12 (Please respect the right amount of days per month)!"
				<< endl;
	}
}


// Support functions:
bool program_Checks()
{
	bool b = true; // true = everything is OK

	// add-Function-Checks:
	if(add(0, 0) != 0) b = false;
	if(add(-5, -5) != -10) b = false;
	if(add(5, 5) != 10) b = false;
	if(add(5.5, 5.5) != 11) b = false;
	if(add(-5.5, -5.5) != -11) b = false;

	return b;
}


bool continue_Program_Loop()
{
	bool b = true;
	string s = "";

	cout << "Do you want to continue calculating?\n" << endl;
	cin >> s;
	if(s == "yes" || s == "Yes" || s == "y" || s == "Y") b = true;
	if(s == "no" || s == "No" || s == "n" || s == "N") b = false;

	return b;
}


unsigned short stous(string str)
{
	unsigned int uint = stoul(str); // Converting string into unsigned integer
	unsigned short s = (short)uint; // Converting/Cast unsigned integer to unsigned short
	return s;
}
