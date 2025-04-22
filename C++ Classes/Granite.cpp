#include <string>  
#include "Granite.h"  
#include "Rock.cpp"  

using namespace std;  

Granite::Granite() : Rock() {  

}  

void Granite::read(ostream& ostream, istream& istream) {  
  ostream << "Enter details for Granite:" << endl;  
  ostream << "Name: ";  
  istream >> name;  
  ostream << "Color: ";  
  istream >> color;  
  ostream << "Crystal: ";  
  istream >> crystal;  
  ostream << "Rock Type: ";
  int typeInput;
  istream >> typeInput;
  type = static_cast<RockType>(typeInput);
}

void Granite::write(ostream& ostream) {  
  ostream << "Granite Details:" << endl;  
  ostream << "Name: " << getName() << endl;  
  ostream << "Color: " << getColor() << endl;  
  ostream << "Crystal: " << getCrystal() << endl;  
  ostream << "Rock Type: " << static_cast<int>(getType()) << endl; // Fixed static_cast syntax
}

string Granite::getName() {  
   return name;  
}  

RockType Granite::getType() {  
   return RockType::IGNEOUS; // Replace with appropriate RockType if defined  
}