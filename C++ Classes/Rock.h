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
Rock();  
string name = "rock";  
string color = "color";  
RockType type = RockType::OTHER;
virtual void read(ostream& ostream, istream& istream);
virtual void write(ostream& ostream);
virtual void read(std::ifstream& istream);
virtual void write(std::ofstream& ostream);
string getName(); 
string getColor();
virtual RockType getType() = 0;
friend std::istream& operator >> (std::istream& istream, Rock& rock);
friend std::ifstream& operator >> (std::ifstream& istream, Rock& rock);
friend std::ostream& operator << (std::ostream& ostream, Rock& rock);
friend std::ofstream& operator << (std::ofstream& ostream, Rock& rock);
~Rock();
// Fixed pure virtual function declaration
};