//This is the header file for interfaceEmployee example
#ifndef INTERFACEEMPLOYEE_H
#define INTERFACEEMPLOYEE_H

#include <string>
using std::string;

namespace SavitchEmployee
{
	class Employee
	{
	public:
		Employee(void);
		Employee(string theName, string theSsn);
		string getName() const;
		string getSsn() const;
		double getNetPay() const;
		void setName(string newName);
		void setSsn(string newSsn);
		void setNetPay(double newNetPay);
		void printCheck() const;
		~Employee(void);
	private:
		string name;
		string ssn;
		double netPay;
	};

	class HourlyEmployee: public Employee
	{
	public:
		HourlyEmployee();
		HourlyEmployee(string theName, string theSsn, 
						double theWageRate, double theHours);
		double getRate() const;
		void setHours(double hoursWorked);
		double getHours() const;
		void printCheck(); //Recall, only mention base class functions if you want to change them
	private:
		double wageRate;
		double hours;
	};

	class SalaryEmployee: public Employee
	{
	public:
		SalariedEmployee();
		SalariedEmployee(string theName, string theSsn, double theWeeklySalary);
		double getSalary() const;
		void setSalary(double newSalary);
		void printCheck();
	private:
		double salary;


	};

}

#endif // INTERFACEEMPLOYEE_H