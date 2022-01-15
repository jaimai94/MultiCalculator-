#include "multiCal.h" // Link to header file

// Run in Windows 10:	.\multical.exe argvName variable1 variable2
//						.\multical argvName variable1 variable2
int main(int argc, char *argv[]){
	const short maxArguments = 4; // Needs to be adjusted, if more arguments can be used!


	// Command line scenarios
	if(argc == 1){ // argc=1 comes from the programm name
		cout	<< "No arguments passed. Please enter arguments. \n"
				<< endl;
		cout	<< "usage: \n"
				<< usage_basicAddition
				<< endl;
	}
	if(argc >= 2 && argc <= maxArguments){ // argv[0]=programm name, argv[1]=1. argument, argv[2]=2. arguments, etc.
		if(argv[1] == argvName_basicAddition){ // Compare strings
			float argvInput1 = stof(argv[2]); // Convert string to float
			float argvInput2 = stof(argv[3]); // Convert string to float
			basicAddition(argvInput1, argvInput2); // Use converted values with function
		}
	}
	if(argc > maxArguments){
		cout	<< "Too many arguments! Currently allowed: "
				<< maxArguments
				<< endl;
	}


	return 0; // Statement for a successfull termination
}
