#include <iostream>
#include "Database.h"
#include <string>
#include <vector>

Database::Database() {
	// Constructor implementation
	vector<Rock> rocks;
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
	std::cin >> *rock;
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
void Database::Load(const std::string& filename)
{
	std::ifstream input(filename);
	if (input.is_open())
	{
			while (!input.eof())
			{
				int type;
				input >> type;
				Rock* rock = 
			};
	}
}

void Database::Save(const std::string& filename)
{
	std::ofstream output(filename);
	if (output.is_open())
	{
		<use for loop to iterate through all animals in the container>
		{
			output << <get animal type and cast to int to write> << std::endl;
			<call animal Write with the file output stream>
		};
	}
}