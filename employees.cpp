// employees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdexcept>
#include <exception>
#include "database.h"


int displayMenu();
void doHire(Records::Database& db);
void doFire(Records::Database& db);
void doPromote(Records::Database& db);
void doDemote(Records::Database& db);

int main()
{
	Records::Database employeeDB;
	bool done = false;
	while (!done) {
		int selection = displayMenu();
		switch (selection) {
		case  0:
			done = true;
			break;
		case 1:
			doHire(employeeDB);
			break;
		case 2:
			doFire(employeeDB);
			break;
		case 3:
			doPromote(employeeDB);
			break;
		case 4:
			employeeDB.displayAll();
			break;
		case 5:
			employeeDB.displayCurrent();
			break;
		case 6:
			employeeDB.displayFormer();
			break;

		default:
			std::cerr << "Unknown command" << std::endl;

		}
		


	}
return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
