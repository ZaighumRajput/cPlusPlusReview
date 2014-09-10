		//Calls all my exercises
#include "headers\standardTemplateLibrary.h"
#include "headers\interfaceEmployee.h"
#include "headers\flowOfControl.h"
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
	
	std::cout << calculateInflation(5,5,5);
	char c = 'N';
	std::cin >> c;
	return 0;
}
