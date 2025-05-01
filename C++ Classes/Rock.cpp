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
	ostream << "What is the name of the rock?: " << endl;
   istream >> name;  
   ostream << "What color is the rock?: " << endl;
   istream >> color;  
   ostream << "How did the rock form?: " << endl;
   int typeValue;  
   istream >> typeValue;  
   type = static_cast<RockType>(typeValue);  
};
void Rock::read(ifstream& istream) {
	istream >> name;
	istream >> color;
}

istream& operator >> (std::istream& istream, Rock& rock)
{
	rock.read(std::cout, istream);
	return istream;
}

ifstream& operator >> (std::ifstream& istream, Rock& rock)
{
	rock.read(istream);
	return istream;
}


// Write function  
void Rock::write(ostream& ostream) {  
   // Write function implementation  
   ostream << "Name: " << getName() << endl;  
   ostream << "Color: " << getColor() << endl;  
   ostream << "Rock Type: " << static_cast<int>(getType()) << endl; // Fixed static_cast syntax  
}

ostream& operator << (std::ostream& ostream, Rock& rock)
{
	rock.write(ostream);
	return ostream;
}

ofstream& operator << (std::ofstream& ofstream, Rock& rock)
{
	rock.write(ofstream);
	return ofstream;
}

void Rock::write(ofstream& ostream) {
	ostream << getName() << endl;
	ostream << getColor() << endl;
	ostream << static_cast<int>(getType()) << endl;
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