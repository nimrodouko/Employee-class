
#include "Employee.h"
#include <iostream>

namespace Records {
	Employee::Employee(const std::string& firstName, const std::string& lastname) :mFirstName(firstName), mLastName(lastName) {

	}

}

	void Employee::promote(int raiseAmount) {
		setSalary(getSalary() + raiseAmount);
	}
	void Employee::demote(int demeritAmount) {
		setSalary(getSalary() - demeritAmount);
	};
	void Employee::hire() {
		mHired = true;
	}
	void Employee::fire() {
		mHired = false;
	}
	void Employee::display() const
	{
		std::cout << "Employee: " << getLastName() << ", " << getFirstName() <<std:: endl;
		
		std::cout << (ishired() ? "Current Employee" : "Former Employee") << std::endl;
		std::cout << "Employee Number: " << getEmployeeNumber() << std::endl;
		std::cout << "Salary: $" << getSalary() << std::endl;
		std::cout << std::endl;
	}