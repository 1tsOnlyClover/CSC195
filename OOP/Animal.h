#pragma once

class Animal {
public:
	//Animal() {}   // default constructor
	Animal() : m_limbs(0) {
		m_ptr = new int(25);

	} // constructor w/o parameter
	Animal(int limbs) : m_limbs(limbs) {} // constructor w/ parameter
	int GetLimbs() { return m_limbs; }
	void SetLimbs(int limbs) { m_limbs = limbs; }

	~Animal() { // deconstructor
		delete m_ptr;
	}

	virtual void Travel();
protected:
	int m_limbs;

	int* m_ptr = nullptr;
};