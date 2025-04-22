// C++ Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Database.h"
using namespace std;

int main()
{
    Database database;
    bool quit = false;
	while (!quit) {
		cout << "1. Create Rock" << endl;
		cout << "2. Display All Rocks" << endl;
		cout << "3. Quit" << endl;
		cout << "Enter your choice: ";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "Enter rock type (0 for Granite, 1 for Turquoise): ";
			int type;
			cin >> type;
			database.Create(static_cast<RockType>(type));
			break;
		}
		case 2:
			database.DisplayAll();
			break;
		case 3:
			quit = true;
			break;
		default:
			cout << "Invalid choice!" << endl;
		}
	}
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
