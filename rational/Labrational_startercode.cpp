#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class rational
{
public:
	/* TODO: default constructor set the rational number to 0, (i.e., numerator is 0, denominator is 1) */


	/* TODO: define input to set the invoking object's value from user input */
	void input();

	/* TODO: define output to display invoking object's value in the standard output, in the form of numerator/denominator */
	void output() const;

	/* TODO: declare the accessor to return the invoking object's numerator */

	
	/* TODO: declare the accessor to return the invoking object's denominator */


	/* TODO: declare Add to set the invoking object to be the sum of op1 and op2, use const & parameters */


	/* TODO: declare Subtract to set the invoking object to the difference of op1 and op2, use const & parameters */


	/* TODO: declare Multiply to set the invoking object to the product of op1 and op2, use const & parameters */


	/* TODO: declare Divide to set the invoking object to the Quotient of op1 and op2, use const & parameters */


private:
	/* TODO: declare data members for rational object */

};


int main()
{
	char oper;
	// TODO: declare rational objects for result and operand.

	cout << "Enter op1 (in the format of p/q): ";
	// TODO: Use your input function to read the first operand into result.

	//Test rational class member function 
	do {
		cout << "\nEnter operator [+, -, /, *, =, c(lear), a(ccessors), q(uit)]: ";
		// TODO: Read the operator into oper

		// TODO: Change the pseodocode below to test oper for binary operators
		if (oper in "+,-,*,/") {
			cout << "\nEnter op2 (in the format of p/q): ";
			// TODO: Use your input function to read the operand into operand

		}

		// ToDo: Implement a switch or multiway if statement with one case for each option above where
		// '+','*','/','-' inputs a rational op1 and calculates result.oper(result,op1)
		// '=' outputs the current result,
		// 'c' to clear current result, use input function to read first operand into result,
		// 'a' to test accessors, 'q' to quit.


	} while (oper != 'q');
	return 0;
}


// TODO: Definitions of all member functions declared above

// TODO: Default constructor sets numerator to 0 and denominator to 1



