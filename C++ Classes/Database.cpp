#include <iostream>
#include "Database.h"

Database::Database() {
	// Constructor implementation
};
Database::~Database() {
	// Destructor implementation
	for (auto rock : rocks) {
		delete rock; // Free allocated memory
	}
};
void Database::Create(RockType type) {
	Rock* rock = nullptr;
	switch (type) {
	case RockType::IGNEOUS:
		rock = new Granite();
		break;
	case RockType::SEDIMENTARY:
		rock = new Turquoise();
		break;
	default:
		std::cout << "Invalid rock type!" << std::endl;
		return;
	}
	rock->read(std::cout, std::cin);
	rocks.push_back(rock);
};
void Database::DisplayAll() {
	for (const auto& rock : rocks) {
		rock->write(std::cout);
	}
};
void Database::Display(const std::string& name) {
	for (const auto& rock : rocks) {
		if (rock->getName() == name) {
			rock->write(std::cout);
			return;
		}
	}
	std::cout << "Rock not found!" << std::endl;
};