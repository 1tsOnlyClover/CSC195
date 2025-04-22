#pragma once  
#include <string>  
using namespace std;  

enum class RockType {  
IGNEOUS,  
SEDIMENTARY,  
OTHER,  
};  

class Rock {  
public:   
Rock(){};  
string name = "rock";  
string color = "color";  
RockType type = RockType::OTHER;
virtual void read(ostream& ostream, istream& istream) {};
virtual void write(ostream& ostream) {};
string getName() { return name; }; // Added return statement
string getColor() { return color; }; // Added return statement
virtual RockType getType() = 0; // Fixed pure virtual function declaration
};