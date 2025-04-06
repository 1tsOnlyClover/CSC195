#pragma once
enum Meat {
	chicken,
	pork,
	pastrami
};

class Sandwich {
public:
    Meat meat;
    float weight;

    void heatSandwich() {
        isHot = true;
    }
private: bool isHot;
};
