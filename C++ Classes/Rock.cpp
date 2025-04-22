#include <iostream>
#include "Rock.h"  

using namespace std;  

// Constructor
Rock::Rock() {
	// Constructor implementation
	name = "rock";
	color = "color";
	type = RockType::OTHER;
};
// Destructor
Rock::~Rock() {
    // Destructor implementation
};
// Read function  
void Rock::read(ostream& ostream, istream& istream) {  
   // Read function implementation  
   istream >> name;  
   istream >> color;  

   int typeValue;  
   istream >> typeValue;  
   type = static_cast<RockType>(typeValue);  
};
// Write function  
void Rock::write(ostream& ostream) {  
   // Write function implementation  
   ostream << "Name: " << getName() << endl;  
   ostream << "Color: " << getColor() << endl;  
   ostream << "Rock Type: " << static_cast<int>(getType()) << endl; // Fixed static_cast syntax  
}
// Get name function
string Rock::getName() {
	// Get name function implementation
	return name;
};
// Get type function
RockType Rock::getType() {
	// Get type function implementation
	return RockType::OTHER; // Default return value
};