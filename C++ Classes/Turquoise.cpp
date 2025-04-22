#include <iostream>
#include "Turquoise.h"
#include "Rock.h"

using namespace std;

Turquoise::Turquoise() : Rock() { ; };

void Turquoise::read(ostream& ostream, istream& istream) {
	ostream << "Enter details for Turquoise:" << endl;
	ostream << "Name: ";
	istream >> name;
	ostream << "Color: ";
	istream >> color;
	ostream << "Matrix: ";
	istream >> matrix;
	ostream << "Rock Type: ";
	int typeInput;
	istream >> typeInput;
	type = static_cast<RockType>(typeInput);
};

void Turquoise::write(ostream& ostream) {
	ostream << "Turquoise Details:" << endl;
	ostream << "Name: " << name << endl;
	ostream << "Color: " << color << endl;
	ostream << "Matrix: " << matrix << endl;
	ostream << "Rock Type: " << static_cast<int>(getType()) << endl; // Fixed static_cast syntax
};

string Turquoise::getName() {
	return name;
};

RockType Turquoise::getType() {
	return RockType::SEDIMENTARY; // Replace with appropriate RockType if defined  
};