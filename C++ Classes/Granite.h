#pragma once  
#include "Rock.h"  

class Granite : public Rock {  
public:  
   Granite();  
   void read(ostream& ostream, istream& istream) override;  
   void write(ostream& ostream) override;  
   string getName();  
   RockType getType() override;  
   string getCrystal(); // Declaration of getCrystal method  
private:  
   string crystal; // Added private member variable for crystal  
};   

    string Granite::getCrystal() {  
       return crystal; // Implementation of getCrystal method  
    }
