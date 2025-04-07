#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class NumberGuesser {
public:
    void play() {
        std::string difficulty;
        std::int16_t toGuess;
        std::int16_t upperBound = 0;
        std::cout << "Welcome to the Number Guesser!" << endl;
        std::cout << "What difficulty would you like?" << endl;
        std::cin >> difficulty;
        std::cout << "Difficulty : " + difficulty + " chosen!" << endl;

        if (difficulty == "easy") {
            upperBound = 5;
        }
        else if (difficulty == "med") {
            upperBound = 10;
        }
        else if (difficulty == "hard") {
            upperBound = 20;
        }
        else {
            std::cout << "Invalid Difficulty chosen! Closing Program." << std::endl;
            upperBound = 0;
            return; // Exit program
        }

        srand(time(0)); // Seed random number generator
        toGuess = rand() % upperBound + 1; // Random number from 1 to upper bound

        std::cout << "You're looking for a number between 1 and " << upperBound << endl;
        int userGuess;
        bool guessedCorrectly = false;

        while (!guessedCorrectly) {
            std::cin >> userGuess;

            if (userGuess == toGuess) {
                std::cout << "Congrats! " << userGuess << " was the number!" << endl;
                guessedCorrectly = true;
            }
            else {
                std::cout << "Too bad! Try again: ";
            }
        }
    }
};

int main() {
    char playAgain;
    NumberGuesser game;
    do {
        game.play();
        std::cout << "\nDo you want to play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
    return 0;
}
