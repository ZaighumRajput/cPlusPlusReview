#include <string>
#include <cstdlib>
#include <iostream>
#include "headers/interfaceEmployee.h"
using std::string;
using std::cout;

namespace SavitchEmployee
{



	Employee::Employee() : name("No name yet"), ssn("No number yet"), netPay(0)
	{
		//deliberately empty
	}

	Employee::Employee(string theName, string theNumber) 
		: name(theName), ssn(theNumber), netPay(0)
	{
		//delibrately empty
	}
	Employee::~Employee()
	{
	}

	string Employee::getName() const
	{
		return name;
	}

	double Employee::getNetPay() const
	{
		return netPay;
	}

	void Employee::setName(string newName)
	{
		name = newName;
	}

	void Employee::setSsn(string newSsn)
	{
		ssn = newSsn;
	}

	void Employee::setNetPay (double newNetPay)
	{
		netPay = newNetPay;
	}

	void Employee::printCheck() const
	{
		cout << "\nErrorL printCheck function called for an \n"
			<< "undifferntiated employee. Aborting the program.\n";
		exit(1);

	}

	
	////Another derived class Implementation
	//	HourlyEmployee::HourlyEmployee() : Employee(), wageRate(0), hours(0)
	//	{
	//	}
	//	HourlyEmployee::HourlyEmployee(string theName, string theNumber,
	//									double theWageRate, double theHours)
	//									: Employee(theName, theNumber), wageRate(theWageRate), hours(theHours)
	//	{
	//	}

	//	void HourlyEmployee::setRate(double newWageRate)
	//	{
	//		wageRate = newWageRate;
	//	}
	//	double HourlyEmployee::setRate() const
	//	{
	//		return wageRate;
	//	}
	//	void HourlyEmployee::setHours(double hoursWorked)
	//	{
	//		hours = hoursWorked;
	//	}
	//	double HourlyEmployee::setHours() const
	//	{
	//		return hours;
	//	}
	//	void HourlyEmployee::printCheck()
	//	{

	//	}
	

}


