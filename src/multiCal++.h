#ifndef SRC_MULTICAL___H_
#define SRC_MULTICAL___H_


#include <iostream>
#include <string>
using namespace std;


// Calculation functions:
float add(float number1, float number2);
void add_Days_To_Date(unsigned short day, unsigned short month, int year, int daysToAdd);

// Support functions:
bool program_Checks();
bool continue_Program_Loop();
unsigned short stous(string str); // String to unsigned short


#endif /* SRC_MULTICAL___H_ */
