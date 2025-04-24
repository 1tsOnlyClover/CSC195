// Streams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;


//reasons to pass by reference
//for classes like ostream/istream, cannot create copies, so pass by reference
//ensure manipulation of variables inside main method
//quickly pass large objects without copying
//rule of thumb: use pbr whenever possible | exception: needs to point to a null value (use pointer instead)
void Write(const string& text, ostream& ostream) {
	//text = "Ha!"; avoid manioulation of values passed as parameters
	ostream << text << endl;
}

void Read(string& text, istream& istream) {
	istream >> text;
}

void Read(vector<int>& numbers, ifstream& istream) {
	while (!istream.eof()) {
		int n;
		istream >> n;

		numbers.push_back(n);
	}
}

int main()
{
	string text = "Hello World\n";
	cout << text;

	//cin >> text;
	getline(cin, text);
	//cout << text << endl;
	Write(text, cout);
	
	//output to file
	ofstream output("data.txt");
	Write(text, output);
	int i = 5;
	output << i << endl; //output to file
	output.close();

	text = "";
	//input from file
	ifstream input("data.txt");
	//getline(input, text);
	Read(text, input); //read from file
	input >> i; //input from file

	input.close();

	cout << "reading from file" << endl;
	cout << text << endl;
	cout << i << endl;

	


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
