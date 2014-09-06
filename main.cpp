		//Calls all my exercises
#include "headers/standardTemplateLibrary.h"
#include "headers/interfaceEmployee.h"
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
	using namespace SavitchEmployee;
	//Employee carlos = Employee();
	//carlos.printCheck();
	Employee Takashi = Employee("Takashi-san", "45");
	std::cout << Takashi.getName();
	
	char c = 'N';
	std::cin >> c;
	return 0;
}
