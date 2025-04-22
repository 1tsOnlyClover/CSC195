#pragma once
#include "Animal.h"

class Dog : public Animal {
public:

	void Travel() override;
	void Speak() override;
};