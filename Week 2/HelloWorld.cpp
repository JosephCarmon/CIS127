/*
 * Joe Carmon
 * CIS127
 * 12/25/2021
 *
 */

#include <iostream> //Basic console Input Output
#include <cstring>  //allows for string type variables

using namespace std;

int main()
{
	string stringFirstName;

	cout << "Please enter your first name: ";    // Outputs test to the console.
	cin  >> stringFirstName;    // Inputs user entered value into the stringFirstName variable
	cout << "Your name is " << stringFirstName << endl;  //Tells the system to insert a carriage return


	return 0;    //retuns no error to the calling system
}
