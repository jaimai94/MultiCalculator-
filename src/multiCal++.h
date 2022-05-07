#ifndef SRC_MULTICAL___H_
#define SRC_MULTICAL___H_


#include <iostream>
#include <string>
using namespace std;

// Calculation functions:
void addition_Basic(float number1, float number2);
void add_Days_To_Date(unsigned short day, unsigned short month, int year, int daysToAdd);

// Helper and support functions:
unsigned short stous(string str); // String to unsigned short: converts strings to unsigned shorts


#endif /* SRC_MULTICAL___H_ */
