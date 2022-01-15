#ifndef SRC_MULTICAL_H_
#define SRC_MULTICAL_H_


#include <iostream> // Needed for in- and outputs
#include <string> // Needed for strings
using namespace std; // Automatic use of std, e.g. std::cout


// Main programm functions:
void basicAddition(float number1, float number2){
	cout	<< "\n"
			<< "The addition of "
			<< number1
			<< " and "
			<< number2
			<< " is: "
			<< number1 + number2
			<< "\n"
			<< endl;
}
const string argvName_basicAddition = "-add";
const string usage_basicAddition = "  multiCal -add number1 number2 \n";


void addDaysToDate(unsigned short day, unsigned short month, int year, int daysToAdd){
	if(	((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 0 && day < 32)
		|| ((month == 4 || month == 6 || month == 9 || month == 11) && day > 0 && day < 31)
		|| (month == 2 && day > 0 && day < 29 && year % 4 != 0 && year % 400 != 0)
		|| (month == 2 && day > 0 && day < 30 && (year % 4 == 0 || year % 400 == 0))
		){ // Input handling
		unsigned short storeDay = day;
		unsigned short storeMonth = month;
		int storeYear = year;
		int storeDaysToAdd = daysToAdd;


		if(daysToAdd >= 0){ // If daysToAdd is positive or null...
			for(int i = daysToAdd; i != 0; i--){ // ...then compute days
				if(month == 4 || month == 6 || month == 9 || month == 11){ // Handle 30 days months
					if(day == 30){day = 1; month++;}
					else{day++;}
				}
				else if(month == 2){ // Handle februrary (month=2) and leap years
					if(day == 28 && year % 4 != 0 && year % 400 != 0){day = 1; month++;}
					else if(day == 29 && (year % 4 == 0 || year % 100 != 0 || year % 400 == 0)){day = 1; month++;}
					else{day++;}
				}
				else{ // Handle 31 days months: 1, 3, 5, 7, 8, 10, 12
					if(day == 31){
						if(month == 12){day = 1; month = 1; year++;} // December case
						else{day = 1; month++;} // All other cases
					}
					else{day++;}
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
		else{ // If daysToAdd is negative (daysToAdd < 0)
			for(int i = daysToAdd; i != 0; i++){ // ...then compute days
				if(month == 4 || month == 6 || month == 9 || month == 11){ // Handle 30 days months
					if(day == 1){month--; day = 31;} // Checked: All these month 1 back are always 31 days
					else{day--;}
				}
				else if(month == 2){ // Handle februrary (month=2) and leap years
					if(day == 1){day = 31; month--;} // Then go back to january
					else{day--;}
				}
				else{ // Handle 31 days months: 1, 3, 5, 7, 8, 10, 12
					if(day == 1){
						if(month == 1){day = 31; month = 12; year--;} // January case
						else if(month == 3 && year % 4 != 0 && year % 400 != 0){day = 28; month--;} // March case; no leap year
						else if(month == 3 && (year % 4 == 0 || year % 100 != 0 || year % 400 == 0)){day = 29; month--;} // March case; leap year
						else if(month == 8){day = 31; month--;} // August case
						else{day = 30; month--;} // 30 month cases: may, july, august, october, december
					}
					else{day--;}
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
	else{
		cout	<< "Error: Day must be between 1-31 and month must be beetween 1-12 (Please respect the right amount of days per month)!"
				<< endl;
	}
}
const string argvName_addDaysToDate = "-addDTD";
const string usage_addDaysToDate = "  multiCal -addDTD day month year +/-daysToAdd \n";


// Helper and support functions:
unsigned short stous(string str){ // string to unsigned short
	unsigned int uint = stoul(str); // Converting str into unsigned integer
	unsigned short s = (short)uint; // Converting/Cast unsigned integer to unsigned short
	return s;
}


#endif /* SRC_MULTICAL_H_ */
