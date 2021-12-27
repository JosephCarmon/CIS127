/*
 * Joe Carmon
 * CIS127
 * 12/25/2021
 *
 */

#include <iostream> //Basic console Input Output
#include <cstring>  //allows for string type variables
#include <cmath>   //Needed for higher level math functions
#include <iomanip>   //Needed for float precision



using namespace std;

int main()
{
	string stringFirstName;
	
	int intLengthofHypotenouse = 4;
	int intRemainder, intDivision;   //declare multiple variables of the same type
	
	float floatPi = M_PI; //M_PI is provided by cmath
	//double doublePi = M_PI;
	double doublePi = static_cast<double>(M_PI);
	
	cout << "Pi Initial value " << M_PI << endl;

	cout << "Pi has a value of " << setprecision(2) << floatPi << endl;
	cout << "Pi has a value of " << setprecision(7) << floatPi << endl;  //Chance precision value to change expressions
	
	cout << "Pi to the power of 2 is " << pow( floatPi ,2) << endl;
	
	//Math in a variable
	
	float floatPowPi = pow(M_PI,2);
	cout << "Power of 2 in a variable " << floatPowPi << endl;
	
	//Modulo
	intDivision = 5/3;
	intRemainder = 5 % 3;
	
	cout << " 5 divided by 3 " << intDivision << endl;
	cout << "Modulo (remainder) of 5/3 " << intRemainder << endl;
	
	
	//Chaning a variables type by casting
	
	cout << "Pi as a double " << doublePi << endl;
	cout << "Hypotenouse " << intLengthofHypotenouse << " Length of a Hypotenouse cast as double " << static_cast<double>(intLengthofHypotenouse) << endl;

	return 0;    //retuns no error to the calling system
}