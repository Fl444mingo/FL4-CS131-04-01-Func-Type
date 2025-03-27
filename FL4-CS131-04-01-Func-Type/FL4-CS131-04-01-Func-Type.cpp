#include <iostream>
#include <stdlib.h> // for rand
#include <time.h> // for time
using namespace std;
int main() {
	int number, maxRange, minRange, int1, int2;
	double double1;
	// Using function calls
	cout << "Enter a number: ";
	cin >> number;
	cout << number << " squared is " << pow(number, 2) << endl;
	cout << number << " to the 4th power is " << pow(number, 4) << endl;
	cout << "The square root of " << number << " is " << sqrt(number) << endl;
	// Random number generation
	cout << "\nEnter the low number in your range: ";
	cin >> minRange;
	cout << "Enter the high number in your range: ";
	cin >> maxRange;
	// initialize random seed and get random number:
	srand(time(NULL));
	number = rand() % (maxRange - minRange) + minRange;
	cout << "The random number between " << minRange << " and ";
	cout << maxRange << " is " << number << endl;
	// Type casting... be careful not to cast too late.
	// int/int results in an int, even if you put the result in a double
	int1 = 2;
	int2 = 3;
	double1 = int1 / int2;
	cout << "int " << int1 << " / " << "int " << int2;
	cout << " = " << double1 << endl;
	// static_cast of result does no good, it is already chopped off as an int
	double1 = static_cast<double>(int1 / int2);
	cout << "static_cast<double> (int " << int1 << " / " << "int " << int2;
	cout << ") = " << double1 << endl;
	// static_cast of one of the ints produces a double result
	double1 = static_cast<double>(int1) / int2;
	cout << "static_cast<double>(int " << int1 << ") / " << "int " << int2;
	cout << " = " << double1 << endl;
	system("pause");
	return 0;
}