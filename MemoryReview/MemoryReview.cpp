#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void Double(int* i) {
	*i = *i * 2;
}

void Square(int &i) {
	i = i * i;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int i = 5;
	// declare a int reference and set it to the int variable above
	int& r = i;
	// output the int variable
	cout << i << endl;

	// set the int reference to some number
	 r = 7;
	// output the int variable
	 cout << i << endl;
	// what happened to the int variable when the reference was changed? (i's value was changed to 7)

	// output the address of the int variable
	 cout << &i << endl;
	// output the address of the int reference
	 cout << &r << endl;
	// are the addresses the same or different? (they're the same)

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	 Square(i);
	// output the int variable to the console
	 cout << i << endl;
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	 int* p = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	 p = &i;

	// output the value of the pointer
	 cout << p << endl;
	// what is this address that the pointer is pointing to? (the address of i)
	// output the value of the object the pointer is pointing to (dereference the pointer)
	 cout << *p << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	 Double(p);

	// output the dereference pointer
	 cout << *p << endl;
	// output the int variable created in the REFERENCE section
	 cout << i << endl;
	// did the int variable's value change when using the pointer?
	// (yes, we passed the variable with p, which is i's address)

}