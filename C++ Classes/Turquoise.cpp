#include <iostream>
#include "Turquoise.h"
#include "Rock.h"

using namespace std;

Turquoise::Turquoise() : Rock() { ; };

void Turquoise::read(ostream& ostream, istream& istream) {
	Rock::read(ostream,istream);
};

void Turquoise::write(ostream& ostream) {
	Rock::write(ostream);
};

void Turquoise::read(ifstream& istream) {
	Rock::read(istream);
};

void Turquoise::write(ofstream& ostream) {
	Rock::write(ostream);
};

string Turquoise::getName() {
	return name;
};

RockType Turquoise::getType() {
	return RockType::SEDIMENTARY; // Replace with appropriate RockType if defined  
};