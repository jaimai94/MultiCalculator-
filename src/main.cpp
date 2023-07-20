//#include <string>
#include "multiCal++.h"

int main(int argc, char *argv[]){
	const short maxArguments = 6; // Needs to be adjusted, if more than 4 arguments needed!

	if(program_Checks() == true)
	{
		bool programLoop = true;

		if(argc == 4 && string(argv[1]) == "-p")
		{
			float sum = add(stof(argv[2]), stof(argv[3]));
			cout	<< stof(argv[2])
					<< " + "
					<< stof(argv[3])
					<< " = "
					<< sum
					<< "\n"
					<< endl;
			programLoop = false;
		}
		if(argc == 6 && string(argv[1]) == "-adtd")
		{
			add_Days_To_Date(stous(argv[2]), stous(argv[3]), stoi(argv[4]), stoi(argv[5]));
		}
		if(argc > maxArguments)
		{
			cout	<< "Too many arguments! Currently allowed: "
					<< maxArguments
					<< endl;
		}
		if(argc > 2 && string(argv[1]) != "exit")
		{
			if(argc == 4 && string(argv[1]) == "plus")
			{
				while(programLoop == true)
				{
					float number1 = 0;
					float number2 = 0;
					cout << "Enter 2 numbers:\n" << endl;
					cin >> number1;
					cin >> number2;
					float sum = add(number1, number2);
					cout << endl;
					cout	<< number1
							<< " + "
							<< number2
							<< " = "
							<< sum
							<< "\n"
							<< endl;
					programLoop = continue_Program_Loop();
				}
			}
		}

		else
		{
			if(argc == 1)
			{
				cout	<< "No arguments passed. ";
				cout 	<< "Enter 'help' or 'usage' for more information.\n"
						<< endl;
			}
			if(argc == 2 && (string(argv[1]) == "help" || string(argv[1]) == "Help" || string(argv[1]) == "usage" || string(argv[1]) == "Usage"))
			{
				cout	<< "usage:\n"
						<< "-add <number1> <number2>\n"
						<< "-adtd <day> <month> <year> <daystoadd>"
						<< endl;
			}
		}
	}
	else cout << "Error: Program checks did not pass or failed unintentionally." << endl;

	return 0;
}
