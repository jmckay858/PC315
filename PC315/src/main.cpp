// PC 3.15 - Math Tutor
// -------------------------
// Programmer: Jeremy F McKay
// Date: September 17, 2012
// -------------------------
// This program displays 2 random numbers between 100 and 999 and waits
// for the user to do the problem on paper then hit enter to see the
// answer.
//
// Note how the code does not go off to infinity, but about 70 characters.
// For example:
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890
//

#include <iostream>
#include <cstdlib>  // For random number
#include <iomanip>
#include <ctime> // For Time
using namespace std;


int main() {
	//Get system time
	unsigned seed = time(0);

	// Seed the random number generator.
	srand(seed);
	int num1, num2, sum;
	char buff[160];

	cout << endl;
	cout << "   " << "Math Tutor\n";
	cout << "   " << "----------\n";
	cout << "   " << "Look at the math problem and do it on paper.\n"
		 << "   " << "When ready, press the ENTER key to check your\n"
		 << "   " << "answer.\n\n";

	//Set random number from 100 to 999
	num1 = rand() %900 + 100;
	num2 = rand() %900 + 100;

	// math to get sum

	sum = num1 + num2;

	// display the problem

	cout << "   " << setw(5) << num1 << endl;
	cout << "   " << "+" << setw(4) << num2 << endl;
	cout << "   " << "-----";
	// wait for enter key
	cin.getline(buff, sizeof buff);
	cout << "   " << setw(5) << sum << endl;







	return 0;
}
