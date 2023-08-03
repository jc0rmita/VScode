#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Array of C++ related words
string words[] = {
    "variable",
    "function",
    "pointer",
    "class",
    "template",
    "inheritance",
    "polymorphism"
};

const int numWords = sizeof(words) / sizeof(words[0]);

// Function to randomly select a word from the array
string getRandomWord() {
    srand(static_cast<unsigned int>(time(0)));
    int randomIndex = rand() % numWords;
    return words[randomIndex];
}

// Function to display the current state of the guessed word
void displayWord(const string& word, const string& guessedLetters) {
    cout << "\nWord: ";
    for (char c : word) {
        if (guessedLetters.find(c) != string::npos) {
            cout << c << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

int main() {
    cout << "Welcome to the C++ Letter Guessing Game!" << endl;
    cout << "Try to guess the C++ related word by entering one letter at a time." << endl;

    string word = getRandomWord();
    string guessedLetters;
    int attempts = 0;
    const int maxAttempts = 7;

    while (true) {
        displayWord(word, guessedLetters);

        cout << "Guessed Letters: " << guessedLetters << endl;

        char guess;
        cout << "Enter your guess: ";
        cin >> guess;
        cin.ignore();

        guessedLetters += guess;

        if (word.find(guess) != string::npos) {
            cout << "Correct guess!" << endl;
        } else {
            cout << "Incorrect guess!" << endl;
            attempts++;
        }

        if (attempts == maxAttempts) {
            cout << "You ran out of attempts! The word was: " << word << endl;
            break;
        }

        if (word.find_first_not_of(guessedLetters) == string::npos) {
            cout << "Congratulations! You guessed the word: " << word << endl;
            break;
        }
    }

    cout << "Thank you for playing the C++ Letter Guessing Game!" << endl;

    return 0;
}
