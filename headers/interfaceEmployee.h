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

}

#endif // INTERFACEEMPLOYEE_H