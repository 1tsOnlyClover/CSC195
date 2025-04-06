// JavaToC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    std::string difficulty;
    std::int16_t toGuess;
    std::int16_t upperBound;
    std::cout << "Welcome to the Number Guesser!";
    std::cout << "What difficulty would you like?";
    std::cin >> difficulty;
    std::cout << "Difficulty : " + difficulty + " chosen!";

    if (difficulty == "easy") {
        upperBound = 5;

    }
    else if (difficulty == "med") {
        upperBound = 10;
    }
    else if (difficulty == "hard") {
        upperBound = 20;
    }

    srand(time(0)); // Seed random number generator
    toGuess = rand() % upperBound + 1; // Random number from 1 to upper bound

    std::cout << "You're looking for a number between 1 and " + upperBound <<endl;
    int userGuess;
    std::cin >> userGuess;

    if (userGuess == toGuess) {
        std::cout << "Congrats!";
        std::cout << userGuess + " was the number!";
    }
    else {
        cout << "Too bad! Try again?";
    }
    main();
}
