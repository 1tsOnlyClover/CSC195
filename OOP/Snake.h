#pragma once
#include "Animal.h"

class Snake : public Animal {
public:
	Snake() {} // default constructor
	Snake(int limbs, bool hasVenom) {// snake constructor
		m_limbs = limbs;
		has_venom = hasVenom;
	}
	void Travel() override; // Declare the Travel function here

	void Speak() override;
protected:
	bool has_venom = false;
};