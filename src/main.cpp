#include <string>
#include "multiCal++.h"

int main(int argc, char *argv[]){
//	bool continueInput = true;
	const short maxArguments = 6; // Needs to be adjusted, if more arguments can be used!
//	string commandInput;
//	char lastInput;

//	while(continueInput != false){
		// Start of programm:
//		cin >> commandInput;

		if(argc == 1){
			cout	<< "No arguments passed. Please enter a command with its meant arguments. Enter help or usage for more information.\n"
					<< endl;
		}
		if(argc == 2 && (string(argv[1]) == "help" || string(argv[1]) == "Help" || string(argv[1]) == "usage" || string(argv[1]) == "Usage")){
			cout	<< "usage:\n"
					<< "-add number1 number2\n"
					<< "-addDTD day month year +/-daysToAdd"
					<< endl;
		}
//		if(argc >= 2 && argc == 4){
		if(argc == 4 && string(argv[1]) == "-add"){
			addition_Basic(stof(argv[2]), stof(argv[3])); // String to float
		}
//		if(argc >= 4 && argc <= maxArguments){
		if(argc == 6 && string(argv[1]) == "-addDTD"){
			add_Days_To_Date(stous(argv[2]), stous(argv[3]), stoi(argv[4]), stoi(argv[5]));
		}
		if(argc > maxArguments){
			cout	<< "Too many arguments! Currently allowed: "
					<< maxArguments
					<< endl;
		}

		// End of programm:
//		cout	<< "Do you want to compute something else? (y/n)"
//				<< endl;
//		cin	>> lastInput;
//		if(lastInput == 'y' || lastInput == 'Y'){continueInput = false;} // If yes repeat
//		else if(lastInput == 'n' || lastInput == 'N'){continueInput = false;} // If no continue
//		else{cout << "Invalid input!" << endl;} // If input ist not y, Y, n or N
//	}

	return 0;
}
