		//Calls all my exercises
#include "headers\standardTemplateLibrary.h"
#include "headers\interfaceEmployee.h"
#include "headers\flowOfControl.h"
#include "headers\nameSpaces.h"
#include "headers\pointers.h"
#include <iostream>

int main()
{
//Standard Template Library
	//Iterators
	//iteratorsWithVectors();
	//accessIterators();
	//reverseIterator();

//Inheritance
	//Inheritance basics
	//using namespace SavitchEmployee;
	//Employee carlos = Employee();
	//carlos.printCheck();
	//Employee Takashi = Employee("Takashi-san", "45");
	//std::cout << Takashi.getName();
	
//Flow of control
	//inflation
	//mainFunction();
	//std::cout <<"The cost is" << calculateInflation(100,2, 0.05);
	
	//return 0;
	using std::cout;
	
	basicPoint();

	char c = 'N';
	std::cin >> c;
	return EXIT_SUCCESS;
}
