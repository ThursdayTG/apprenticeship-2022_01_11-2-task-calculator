// AUTHOR NOTE
// the best part about this is that I have already made a calculator once, lol



// inclusion of libraries
#include <cmath>
#include <iostream>
#include <string>

// inclusion of files
#include "main-header-b002-v1_1_0.hpp"

// using directives
using	std::cout;
using	std::cin;
using	std::string;

/* text *
 *
/**/

// function prototyping
int		help();
double	userInputNumber();
double	maths(double, double, string);

// main function
int main() {

	// used to determine whether do/while-loop should be repeated manually
	bool	restartOperator;

	do {

		// primary variable declaration
		double	inputDouble1 = 0.0;
		double	inputDouble2 = 0.0;
		string	mathOperator;

		int		amountDashes;			// used for final output


		// default output
		cout	<< " \n ~ ~ ~ ~ ~ calculator ~ ~ ~ ~ ~"
				<< " \n"
				<< " \n enter first a number, then the mathematical operation, then the second number."
				<< " \n enter \"h\" or \"help\" at any point to view the full user manual."
				<< " \n"
				<< " \n";


		// user input
		inputDouble1 = userInputNumber();
		cout	<< " operator: \t";
		cin		>> mathOperator;
		inputDouble2 = userInputNumber();


		// primary function execution & output
		cout	<< " ";

		for (	amountDashes = 0;
				amountDashes < 16;
				amountDashes++) {
			cout << "-";
		}

		cout	<< " \n result: \t"
				<< maths(inputDouble1, inputDouble2, mathOperator)
				<< " \n ";


		// end block
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen

	}	while (restartOperator == true);

	return 0;
}



// functions / subroutines
double userInputNumber() {

	string	userInputStr = "0";
	double	userInputDbl = 0;
	int		repeatInput = 1;

	while (repeatInput != 0) {

		repeatInput = 0;

		cout	<< " number: \t";
		cin		>> userInputStr;

		if	(userInputStr == "help")

		userInputDbl = std::stod(userInputStr);
	}

	return userInputDbl;
}

int help() {
	cout	<< " \n now choose the operator:"
			<< " \n enter '1' OR '+' for addition"
			<< " \n enter '2' OR '-' for subtraction"
			<< " \n enter '3' OR '*' for multiplication"
			<< " \n enter '4' OR '/' for division"
			<< " \n ";

	return 1;
}

double maths(double inputDouble1, double inputDouble2, string mathOperator) {

	double	result = 0.0;

	if		(mathOperator == "1" || mathOperator == "+" || mathOperator == "add")	// addition
		result = inputDouble1 + inputDouble2;

	else if	(mathOperator == "2" || mathOperator == "-" || mathOperator == "sub")	// subtraction
		result = inputDouble1 - inputDouble2;

	else if	(mathOperator == "3" || mathOperator == "*" || mathOperator == "mult")	// multiplication
		result = inputDouble1 * inputDouble2;

	else if	(mathOperator == "4" || mathOperator == "/" || mathOperator == "div")	// division
		result = inputDouble1 / inputDouble2;

	return result;
}



/*	using C++ compiler from GCC via console

	compile for debug and check for errors:
g++ -Og -Wall -Wextra -Wpedantic -Werror main-source-b008.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b008.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, check for errors, and run program:
g++ -Og main-source-b008.cpp -o main-newest.debug && clear && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b008.cpp -o main-newest.release && ./main-newest.release

	g++ -Og main-source-b008.cpp -o main-newest.debug
 && clear
 && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b008.cpp -o main-newest.release
 && ./main-newest.release
*/
