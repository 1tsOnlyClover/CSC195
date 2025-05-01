#include <string>  
#include "Granite.h"  
#include "Rock.cpp"  

using namespace std;  

Granite::Granite() : Rock() { ; };

void Granite::read(ostream& ostream, istream& istream) {
	Rock::read(ostream, istream);
	ostream << "Crystal: ";
	istream >> crystal;
};

void Granite::write(ostream& ostream) {
	Rock::write(ostream);
	ostream << "Crystal: " << getCrystal() << endl;
};

void Granite::read(ifstream& istream) {
	Rock::read(istream);
	istream >> crystal;
}

void Granite::write(ofstream& ostream) {
	Rock::write(ostream);
	ostream << crystal;
}

string Granite::getName() {
	return name;
};

RockType Granite::getType() {
	return RockType::IGNEOUS; // Replace with appropriate RockType if defined  
};