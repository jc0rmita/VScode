#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to randomly select a word from the array
string getRandomWord() {
    vector<string> words = {"apple", "banana", "orange", "grape", "watermelon", "pineapple", "strawberry"};
    srand(static_cast<unsigned int>(time(0)));
    int randomIndex = rand() % words.size();
    return words[randomIndex];
}

// Function to display the current state of the guessed word
void displayWord(const string& word, const vector<bool>& guessedLetters) {
    cout << "Word: ";
    for (size_t i = 0; i < word.length(); ++i) {
        if (guessedLetters[i]) {
            cout << word[i] << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

int main() {
    cout << "Welcome to Hangman!" << endl;

    string word = getRandomWord();
    vector<bool> guessedLetters(word.length(), false);
    int remainingAttempts = 6;
    vector<char> guessedLettersList;

    while (true) {
        displayWord(word, guessedLetters);

        cout << "Guessed Letters: ";
        for (char c : guessedLettersList) {
            cout << c << " ";
        }
        cout << endl;

        cout << "Remaining Attempts: " << remainingAttempts << endl;

        char guess;
        cout << "Enter your guess: ";
        cin >> guess;
        cin.ignore();

        bool alreadyGuessed = false;
        for (char c : guessedLettersList) {
            if (c == guess) {
                alreadyGuessed = true;
                break;
            }
        }

        if (alreadyGuessed) {
            cout << "You have already guessed that letter!" << endl;
            continue;
        }

        guessedLettersList.push_back(guess);

        bool correctGuess = false;
        for (size_t i = 0; i < word.length(); ++i) {
            if (word[i] == guess) {
                guessedLetters[i] = true;
                correctGuess = true;
            }
        }

        if (correctGuess) {
            cout << "Correct guess!" << endl;
        } else {
            cout << "Incorrect guess!" << endl;
            --remainingAttempts;
        }

        if (remainingAttempts == 0) {
            cout << "Game over! You ran out of attempts. The word was: " << word << endl;
            break;
        }

        if (guessedLetters == vector<bool>(word.length(), true)) {
            cout << "Congratulations! You guessed the word: " << word << endl;
            break;
        }

        cout << endl;
    }

    cout << "Thank you for playing Hangman!" << endl;

    return 0;
}
