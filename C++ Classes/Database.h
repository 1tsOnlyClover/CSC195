#pragma once
#include <iostream>  
#include "Granite.h"  
#include "Turquoise.h"  
#include "Rock.h" // Added this include to ensure Rock and RockType are recognized  
#include <vector>  

using namespace std;  

class Database {  
public:  
   Database();  
   vector<Rock*> rocks;  
   ~Database(); // Destructor  
   void Create(RockType type); // Updated to use RockType directly  
   void DisplayAll();  
   void Display(const std::string& name);  
   void Display(RockType type);  
};
