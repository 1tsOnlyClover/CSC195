// ContainersHW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

void printWeekdays() {
	// Create an array to store weekdays with fixed size
	string weekdays[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	cout << "Weekdays:" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << weekdays[i] << endl;
	}
}

void printNumbers(){
	// Create a vector to store numbers with dynamic size and freedom to add but removing happens to the end of the vector every time
	vector<int> numbers{ 1, 2, 3, 4, 5 };
	numbers.push_back(6);
	numbers.push_back(7);
	numbers.pop_back();
	cout << "Vector numbers:" << endl;
	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i] << endl;
	}
}

void printFruit() {
	// Create a list to store fruits with the ability to freely remove and add from the front and back
	list<string> fruits{ "Apple", "Banana", "Cherry" };
	fruits.push_front("Mango");
	fruits.push_back("Orange");
	fruits.remove("Banana");
	cout << "List fruits:" << endl;
	for (const auto& fruit : fruits)
	{
		cout << fruit << endl;
	}
}

void printGroceries() {
	// Create a map to store grocery items and their quantities
	map<string, int> groceries;
	groceries["Bananas"] = 5;
	groceries["Apples"] = 10;
	groceries["Cherries"] = 15;
	cout << "Map groceries:" << endl;
	for (const auto& item : groceries)
	{
		cout << item.first << ": " << item.second << endl;
	}
}

int main()
{
	printWeekdays();
	cout << "----------------------------------------------" << endl;
	printNumbers();
	cout << "----------------------------------------------" << endl;
	printFruit();
	cout << "----------------------------------------------" << endl;
	printGroceries();
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
