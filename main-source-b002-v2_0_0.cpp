// inclusion of libraries
	#include <iostream>
	#include <string>

// inclusion of files
	#include "main-header-b002-v1_1_0.hpp"

/* the best part about this is that I have already made a calculator once, lol */



using	std::cout;
using	std::cin;
using	std::string;
using	std::stod;



/*	function prototyping	*/
int		help();

void	addition(float, float);
void	subtraction(float, float);
void	multiplication(float, float);
void	division(float, float);



/*	main function	*/
int main() {

	/*	local variable declaration	*/
	int		restartOperator;
		// used to determine whether do-while loop should be repeated manually

	int		repeatInput;
	/**/


	do {

		/*	local variable declaration	*/
		string	userInput1 = "0",	userInput2 = "0";
		double	double1 = 0,		double2 = 0;

		string	mathOperator;
		/*	local variable declaration	*/

		/*	primary execution block	*/
		cout	<< " \n ~ ~ ~ calculator ~ ~ ~"
				<< " \n"
				<< " \n type \"help\" for a manual."
				<< " \n";

		do {

			repeatInput = 0;

			cout	<< " number 1: ";
			cin		>> userInput1;

			if	(	userInput1 == "help")
				repeatInput = help();
			else
				double1 = std::stod(userInput1);

		}	while (repeatInput != 0)

		do {

			repeatInput = 0;

			cout	<< " number 2: ";
			cin		>> userInput2;

			if	(	userInput2 == "help")
				repeatInput = help();
			else
				double2 = std::stod(userInput2);

		}	while (repeatInput != 0)



		cin		>> mathOperator;

		if		(mathOperator == "1" || mathOperator == "+")
			addition(double1, double2);

		else if	(mathOperator == "2" || mathOperator == "-")
			subtraction(double1, double2);

		else if	(mathOperator == "3" || mathOperator == "*")
			multiplication(double1, double2);

		else if	(mathOperator == "4" || mathOperator == "/")
			division(double1, double2);

		/*	primary execution block	*/

		/*	end block	*/
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen
		/*	end block	*/

	}	while (restartOperator == true);

	return 0;
}



/*	functions / subroutines	*/
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
g++ -Og -Wall -Wextra -Wpedantic -Werror main-source-b002-v2_0_0.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b002-v2_0_0.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, check for errors, and run program:
g++ -Og main-source-b002-v2_0_0.cpp -o main-newest.debug && clear && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b002-v2_0_0.cpp -o main-newest.release && ./main-newest.release

	g++ -Og main-source-b002-v2_0_0.cpp -o main-newest.debug
 && clear
 && g++ -O3 -Wall -Wextra -Wpedantic -Werror main-source-b002-v2_0_0.cpp -o main-newest.release
 && ./main-newest.release
*/
