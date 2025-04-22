#include <iostream>
#include "Rock.h"  

using namespace std;  

// Constructor
Rock::Rock() {
	// Default constructor
}
// Destructor
Rock::~Rock() {
	// Destructor
}
// Read function
void Rock::read(ostream& ostream, istream& istream) {
	// Read function implementation
	istream >> name;
	istream >> color;
	istream >> type;
}
// Write function
void Rock::write(ostream& ostream) {
	// Write function implementation
	ostream << "Name: " << getName() << endl;
	ostream << "Color: " << getColor() << endl;
	ostream << "Rock Type: " << getType() << endl;
}
// Get name function
string Rock::getName() {
	// Get name function implementation
	return name;
}
// Get type function
RockType Rock::getType() {
	// Get type function implementation
	return RockType::OTHER; // Default return value\
}