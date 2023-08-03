#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<std::string> syntaxElements = {
        "cout<<variable_name/\"text\";",
        "cin>>variable;",
        "data type variableName = value;",
        "if(condition) {\n    //statements;\n} else {\n    //statements;\n}",
        "const type name = value;"
    };

    // Shuffle the syntax elements randomly
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(syntaxElements.begin(), syntaxElements.end(), g);

    std::cout << "Syntax Identification Game!" << std::endl;
    std::cout << "Identify the correct syntax for each element." << std::endl;

    int totalElements = syntaxElements.size();
    int score = 0;

    for (int i = 0; i < totalElements; i++) {
        std::cout << "Element " << (i + 1) << ": " << std::endl;
        std::cout << syntaxElements[i] << std::endl;

        std::string userInput;
        std::cout << "Your answer: ";
        std::getline(std::cin, userInput);

        // Remove any leading/trailing whitespaces from user input
        userInput.erase(userInput.begin(), std::find_if(userInput.begin(), userInput.end(), [](int ch) {
            return !std::isspace(ch);
        }));
        userInput.erase(std::find_if(userInput.rbegin(), userInput.rend(), [](int ch) {
            return !std::isspace(ch);
        }).base(), userInput.end());

        if (userInput == syntaxElements[i]) {
            std::cout << "Correct syntax!" << std::endl;
            score++;
        } else {
            std::cout << "Incorrect syntax. The correct answer is:" << std::endl;
            std::cout << syntaxElements[i] << std::endl;
        }

        std::cout << std::endl;
    }

    std::cout << "Game Over!" << std::endl;
    std::cout << "Your score: " << score << " out of " << totalElements << std::endl;

    return 0;
}
