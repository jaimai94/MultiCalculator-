#ifndef SRC_MULTICAL_H_
#define SRC_MULTICAL_H_


#include <iostream> // Needed for in- and outputs
#include <string> // Needed for strings
using namespace std; // Automatic use of std, e.g. std::cout

void basicAddition(float number1, float number2){
	cout	<< "The addition of "
			<< number1
			<< " and "
			<< number2
			<< " is: "
			<< number1 + number2
			<< endl;
}
const string argvName_basicAddition = "-add";
const string usage_basicAddition = "  multiCal -add number1 number2 \n";


#endif /* SRC_MULTICAL_H_ */
