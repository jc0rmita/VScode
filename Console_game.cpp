#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    const int MAX_TRIES = 5; // Maximum number of tries allowed
    const char alphabet[] = "abcdefghijklmnopqrstuvwxyz"; // Possible letters to guess

    int score = 0;
    char playAgain = 'y';

    while (playAgain == 'y') {
        char target = alphabet[rand() % 26]; // Randomly select a target letter
        int tries = 0;

        std::cout << "Welcome to the Letter Guessing Game!\n";
        std::cout << "Guess the letter between 'a' and 'z'.\n";

        while (tries < MAX_TRIES) {
            char guess;
            std::cout << "Enter your guess: ";
            std::cin >> guess;

            if (guess == target) {
                std::cout << "Congratulations! You guessed the correct letter.\n";
                score++;
                break;
            } else if (guess < target) {
                std::cout << "Your guess is alphabetically lower.\n";
            } else {
                std::cout << "Your guess is alphabetically higher.\n";
            }

            tries++;
        }

        if (tries == MAX_TRIES) {
            std::cout << "Sorry, you did not guess the correct letter. The target was '" << target << "'.\n";
        }

        std::cout << "Your current score is: " << score << "\n";
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    }

    std::cout << "Thank you for playing the Letter Guessing Game!\n";

    return 0;
}
