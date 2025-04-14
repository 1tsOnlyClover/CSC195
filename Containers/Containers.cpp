// Containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main()
{
	string fruits[5] = { "Banana", "Kiwi", "Mango", "Chikoo", "Strawberry" };

	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(3);
	numbers.push_back(5);
	numbers.push_back(7);
	numbers.push_back(25);

	numbers.pop_back();
	numbers.pop_back();

	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << endl;
	}

	cout << "----------------------------------------------" << endl;

	//Pointer Arithmetic

	string chemicals[5] = { "mercury", "hydrochloric acid", "chlorine", "bromine", "table salt" };

	cout << chemicals[2] << endl;
	cout << chemicals << endl; // returns address of first element in the array
	cout << &chemicals[0] << endl;

	cout << chemicals << endl;

	cout << sizeof(chemicals) << endl; // returns the size of the array in bytes

	cout << sizeof(chemicals[0]) << endl; // returns the size of the first element in bytes

	int size = sizeof(chemicals) / sizeof(chemicals[0]); // calculates the number of elements in the array

	cout << "----------------------------------------------" << endl;

	for (int i = 0; i < size; i++) {
		cout << &chemicals[i] << endl;
	}

	//for each
	for (string chemical : chemicals) {
		cout << chemical << endl;
	}

	cout << "----------------------------------------------" << endl;

	string* p = chemicals; // pointer to the first element of the array
	cout << p << endl;
	cout << ++p << endl; //increments BEFORE printing, p++ increments AFTER printing
	cout << ++p << endl;
	cout << --p << endl; // decrements BEFORE printing, p-- decrements AFTER printing

	cout << p + 2 << endl; // pointer arithmetic, moves the pointer 2 elements forward

	cout << p - 3 << endl; // pointer arithmetic, moves the pointer 3 elements backward

	cout << "----------------------------------------------" << endl;

    //containers
	list<string> cars = { "Hyundai", "Ferrari", "Mercedes", "Volvo" };

	cout << cars.front() << endl; // prints the first element
	cout << cars.back() << endl; // prints the last element

	cars.pop_back(); // removes the last element and prints it
	cout << cars.back() << endl; // prints the last element after popping

	cars.push_front("Tesla");
	cout << cars.front() << endl; // prints the first element after pushing

	map<string, int> pet = { {"Dogs:", 23}, {"Chameleons:", 3}, {"Turtle:", 43} };

	pet["Dogs:"] = 50; // updates the value associated with the key "Dogs:"

	cout << pet["Dogs:"] << endl; // prints the value associated with the key "Dogs:"

	pet["Spiders"] = 2; // adds a new key-value pair to the map

	cout << pet.empty() << endl; // checks if the map is empty (returns 0 for false)

}

