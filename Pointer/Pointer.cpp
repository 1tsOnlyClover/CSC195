// Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _DBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
using namespace std;

template<typename T>
class smart_ptr {
public:
	smart_ptr(T* ptr = nullptr) : _ptr(ptr) {}
	smart_ptr(const smart_ptr&) = delete;
	smart_ptr& operator=(const smart_ptr&) = delete;
	~smart_ptr() { if(_ptr) delete _ptr; } // Destructor to free memory
	T& operator*() { return *_ptr; } // Dereference operator
	T* operator&() { return _ptr; } // Address-of operator
	T* operator->() { return _ptr; } // Member access operator
};

int main()
{
	//int arr[] = { 2,4,6,8 };

	//int* p = arr; // Pointer to the first element of the array
	//p++;
	//p++;
	//cout << *p << endl; // Dereferencing the pointer to get the value of the first element

	int* p = new int{5}; // Dynamically allocate memory for an integer

	cout << *p << endl; // Dereferencing the pointer to get the value inside the heap

	delete p; // Free the dynamically allocated memory

	{
		smart_ptr<int> sp{ new int {25} };
		unique_ptr<int> up{ new int {20} };

		unique_ptr<int> upc{ up };

	_CrtDumpMemoryLeaks();
}
