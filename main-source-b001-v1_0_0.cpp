// inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "main-header-b001-v1_0_0.hpp"

// the best part about this is that I have already made a calculator once, lol



/*	function prototyping	*/
void	addition(float, float);
void	subtraction(float, float);
void	multiplication(float, float);
void	division(float, float);



/*	main function	*/

int main() {

	/**/
	using	std::cout;
	using	std::cin;
	/**/

	/*	local variable declaration	*/
	bool	restartOperator;
		// used to determine whether do-while loop should be repeated manually
	/**/


	do {

		/*	local variable declaration	*/
		float	inputFloat1 = 0;
		float	inputFloat2 = 0;
		char	mathOperator;
		/*	local variable declaration	*/

		/*	primary execution block	*
		cout	<< " test 1 ..."
				<< " \n";

		cout	<< " test 2 ...";
		cout	<< " \n";
		/*	primary execution block	*/

		/*	primary execution block	*/
		cout	<< " \n ~ ~ ~ calculator ~ ~ ~"
				<< " \n"
				<< " \n put in two numbers. integers and float numbers are valid."
				<< " \n";

		cout	<< " number 1: ";	cin	>> inputFloat1;
		cout	<< " number 2: ";	cin	>> inputFloat2;

		cout	<< " \n now choose the operator:"
				<< " \n enter '1' OR '+' for addition"
				<< " \n enter '2' OR '-' for subtraction"
				<< " \n enter '3' OR '*' for multiplication"
				<< " \n enter '4' OR '/' for division"
				<< " \n ";

		cin		>> mathOperator;
		if		(mathOperator == '1' || mathOperator == '+')	addition(inputFloat1, inputFloat2);
		else if	(mathOperator == '2' || mathOperator == '-')	subtraction(inputFloat1, inputFloat2);
		else if	(mathOperator == '3' || mathOperator == '*')	multiplication(inputFloat1, inputFloat2);
		else if	(mathOperator == '4' || mathOperator == '/')	division(inputFloat1, inputFloat2);
		/*	primary execution block	*/

		/*	end block	*/
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen
		/*	end block	*/

	}	while (restartOperator == true);

	return 0;

}



/*	functions / subroutines	*/

void addition(float inputFloat1, float inputFloat2) {
	std::cout	<< " \n"
				<< " sum: "
				<< inputFloat1 + inputFloat2
				<< " \n";
}

void subtraction(float inputFloat1, float inputFloat2) {
	std::cout	<< " \n"
				<< " difference: "
				<< inputFloat1 - inputFloat2
				<< " \n";
}

void multiplication(float inputFloat1, float inputFloat2) {
	std::cout	<< " \n"
				<< " product: "
				<< inputFloat1 * inputFloat2
				<< " \n";
}

void division(float inputFloat1, float inputFloat2) {
	std::cout	<< " \n"
				<< " quotient: "
				<< inputFloat1 / inputFloat2
				<< " \n";
}



/*	using C++ compiler from GCC via console

	compile for debug:
g++ -Og main-source-b001-v1_0_0.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b001-v1_0_0.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, and run program:
g++ -Og main-source-b001-v1_0_0.cpp -o main-newest.debug && g++ -O3 main-source-b001-v1_0_0.cpp -o main-newest.release && clear && ./main-newest.release

   g++ -Og main-source-b001-v1_0_0.cpp -o main-newest.debug
&& g++ -O3 main-source-b001-v1_0_0.cpp -o main-newest.release
&& clear
&& ./main.release
*/
