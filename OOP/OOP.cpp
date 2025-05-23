// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Snake.h"
#include <vector> // for vector container
using namespace std;

int main()
{
	//Animal animal(5);   // allocated memory on stack - no "new" keyword
	//animal.Travel();

	//Dog dog;
	//dog.Travel();

	//Animal* animalPtr = new Animal(); // animal on heap, pointer on stack

	//(*animalPtr).Travel(); // dereference pointer to call method
	//animalPtr->Travel(); // same as above, but using pointer syntax

	//Animal* dogPtr = new Dog(); // dog on heap, pointer on stack
	//dogPtr->Travel(); // calls Animal::Travel() because Dog::Travel() is not virtual (update, has now been made virtual)

	//cout << animal.GetLimbs() << endl;

	//{ //new scope
	//	Animal* ptrAnim = new Animal;
	//}

	//ptrAnim->Travel(); // error: ptrAnim is out of scope

	Snake python(0,true);
	python.Travel();
	python.Speak();

	Dog dog;

	//containters to hold animals
	vector<Animal*> animals;
	animals.push_back(new Dog());
	animals.push_back(new Dog());
	animals.push_back(new Snake());

	for (Animal* ani : animals) {
		ani->Speak();
	}

	for (Animal* ani : animals) {
		delete ani; // free memory
	}
	animals.clear(); // clear vector
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
