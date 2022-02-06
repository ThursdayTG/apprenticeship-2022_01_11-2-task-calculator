// inclusion of libraries
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

void	addition(float, float);
void	subtraction(float, float);
void	multiplication(float, float);
void	division(float, float);



/*	main function	*/
int main() {

	/*	local variable declaration - main()	*/
	int		restartOperator;
		// used to determine whether do-while loop should be repeated manually
	/*	local variable declaration - main()	*/


	do {

		/*	local variable declaration	*/
		double	inputDouble1 = 0.0, inputDouble2 = 0.0;

		string	mathOperator;
		/*	local variable declaration	*/

		/*	user input	*/
		cout	<< " \n ~ ~ ~ calculator ~ ~ ~"
				<< " \n"
				<< " \n type \"help\" for a manual."
				<< " \n";

		inputDouble1 = userInputNumber();
		inputDouble2 = userInputNumber();
		/*	user input	*/


		/*	primary function execution & output	*/
		if		(mathOperator == "1" || mathOperator == "+")
			addition(inputDouble1, inputDouble2);

		else if	(mathOperator == "2" || mathOperator == "-")
			subtraction(inputDouble1, inputDouble2);

		else if	(mathOperator == "3" || mathOperator == "*")
			multiplication(inputDouble1, inputDouble2);

		else if	(mathOperator == "4" || mathOperator == "/")
			division(inputDouble1, inputDouble2);
		/*	primary function execution & output	*/

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

		cout	<< " input: ";
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

void	addition(float double1, float double2) {
	cout	<< " \n sum: "
			<< double1 + double2
			<< " \n ";
}

void	subtraction(float double1, float double2) {
	cout	<< " \n difference: "
			<< double1 - double2
			<< " \n ";
}

void	multiplication(float double1, float double2) {
	cout	<< " \n product: "
			<< double1 * double2
			<< " \n ";
}

void	division(float double1, float double2) {
	cout	<< " \n quotient: "
			<< double1 / double2
			<< " \n ";
}



/*	using C++ compiler from GCC via console

	compile for debug and check for errors:
g++ -Og -Wall -Wextra -Wpedantic -Werror main-source-b005.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b005.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, check for errors, and run program:
g++ -Og main-source-b005.cpp -o main-newest.debug && clear && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b005.cpp -o main-newest.release && ./main-newest.release

	g++ -Og main-source-b005.cpp -o main-newest.debug
 && clear
 && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b005.cpp -o main-newest.release
 && ./main-newest.release
*/
