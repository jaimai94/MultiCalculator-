#include "multiCal.h" // Link to header file

// Run in Windows 10:	.\multiCal.exe argvName variable1 variable2
//						.\multiCal argvName variable1 variable2
int main(int argc, char *argv[]){
	const short maxArguments = 6; // Needs to be adjusted, if more arguments can be used!


	// Command line scenarios
	if(argc == 1){ // argc=1 comes from the programm name
		// usage texts for the functions:
		cout	<< "No arguments passed. Please enter arguments. \n"
				<< endl;
		cout	<< "usage: \n"
				<< usage_basicAddition
				<< endl
				<< usage_addDaysToDate
				<< endl;
	}
	if(argc >= 2 && argc <= maxArguments){ // argv[0]=programm name, argv[1]=1. argument, argv[2]=2. arguments, etc.
		// basicAddition function:
		if(argv[1] == argvName_basicAddition){ // Compare strings
			basicAddition(stof(argv[2]), stof(argv[3])); // Use converted arguments with function; converted strings to floats
		}
		// addDaysToDate function:
		if(argv[1] == argvName_addDaysToDate){
			addDaysToDate(stous(argv[2]), stous(argv[3]), stoi(argv[4]), stoi(argv[5]));
		}
	}
	if(argc > maxArguments){
		cout	<< "Too many arguments! Currently allowed: "
				<< maxArguments
				<< endl;
	}


	return 0; // Statement for a successfull termination
}
