#pragma once  
#include <string>  
#include "Rock.h"  
using namespace std;

class Turquoise : public Rock {
public: // Change access specifier to public to make the constructor accessible
Turquoise();
string matrix = "Limonite";
void read(ostream& ostream, istream& istream) override;
void write(ostream& ostream) override;
string getName();
RockType getType() override;
};