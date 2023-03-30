#include <iostream>
#include <stdexcept>
#include "database.h"
#include <string>


namespace Records {
	Employee& Database::addEmployee(const std::string& firstName, const std::string& lastName)
	{
		Employee theEmployee(firstName, lastName);
		theEmployee.setEmployeeNumber(mNextEmployeeNumber++);
		theEmployee.hire();
		mEmployees.push_back(theEmployee);
		return mEmployees[mEmployees.size() - 1]


	}
}
	Employee &Database::getEmployee(int employeeNumber){
		for (auto& employee : mEmployees) {
			if (employee.getEmployeeNumber() == employeeNumber) {
				return employee;
			}
			else {
				throw logic_error("No employee Found");
			}
		}

		void Database::displayAll() {
			for (const auto& employee : mEmployees) {
				employee.display();
			}
		}
		void Database::displayCurrent() {
			for (const auto& employee : mEmployees) {
				if (employee.isHired()) {
					employee.display();
				}
			}
		}
