// inclusion of libraries
	#include <cmath>
	#include <iostream>
	#include <string>

// inclusion of files
	#include "main-header-b002-v1_1_0.hpp"

/* the best part about this is that I have already made a calculator once, lol */



/*	using directives	*/
using	std::cout;
using	std::cin;
using	std::string;
using	std::stod;



/*	function prototyping	*/
int		help();
double	userInputNumber();
double	maths(double, double, string);



/*	main function	*/
int main() {

	/*	local variable declaration - main()	*/
	int		restartOperator;
		// used to determine whether do-while loop should be repeated manually
	/*	local variable declaration - main()	*/


	do {

		/*	primary execution block	*/
		double	inputDouble1 = 0.0;
		double	inputDouble2 = 0.0;
		string	mathOperator;

		cout	<< " \n ~ ~ ~ calculator ~ ~ ~"
				<< " \n"
				<< " \n type \"help\" for a manual."
				<< " \n";

		inputDouble1 = userInputNumber();
		cout	<< " operator: \t";
		cin		>> mathOperator;
		inputDouble2 = userInputNumber();

		cout	<< " ---------------- "
				<< " \n result: \t"
				<< maths(inputDouble1, inputDouble2, mathOperator)
				<< " \n ";
		/*	primary execution block	*/

		/*	end block	*/
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen
		/*	end block	*/

	}	while (restartOperator == true);

	return 0;
}



/*	functions / subroutines	*/
double	userInputNumber() {

	string	userInputStr = "0";
	double	userInputDbl = 0;
	int		repeatInput = 1;

	while (repeatInput != 0) {

		repeatInput = 0;

		cout	<< " number: \t";
		cin		>> userInputStr;

		userInputDbl = std::stod(userInputStr);
	}

	return userInputDbl;
}

int		help() {
	cout	<< " \n now choose the operator:"
			<< " \n enter '1' OR '+' for addition"
			<< " \n enter '2' OR '-' for subtraction"
			<< " \n enter '3' OR '*' for multiplication"
			<< " \n enter '4' OR '/' for division"
			<< " \n ";

	return 1;
}

double	maths(double inputDouble1, double inputDouble2, string mathOperator) {

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
g++ -Og -Wall -Wextra -Wpedantic -Werror main-source-b006.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b006.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, check for errors, and run program:
g++ -Og main-source-b006.cpp -o main-newest.debug && clear && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b006.cpp -o main-newest.release && ./main-newest.release

	g++ -Og main-source-b006.cpp -o main-newest.debug
 && clear
 && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b006.cpp -o main-newest.release
 && ./main-newest.release
*/
