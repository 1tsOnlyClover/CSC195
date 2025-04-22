#pragma once  
#include <string>  
#include "Rock.h"  
using namespace std;

class Turquoise : public Rock {
	string matrix = "Limonite";
	void read(ostream& ostream, istream& istream) override;
	void write(ostream& ostream) override;
	string getName();
	RockType getType() override;
};