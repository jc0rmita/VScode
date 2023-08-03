#include <iostream>
#include <iomanip>

int main() {
    std::string gameDescription = "In this mechanics-based game, you will have the opportunity to choose your desired difficulty level (Easy, Medium, Hard) and put your syntax skills to the test. Your task is to identify whether the provided syntax is correct or incorrect, and if incorrect, you must input the right syntax within a limited number of attempts.";

    // Calculate the necessary padding to center the text
    int screenWidth = 80; // Adjust this based on your screen width
    int textWidth = gameDescription.length();
    int padding = (screenWidth - textWidth) / 2;

    // Display the text in the center of the screen
    std::cout << std::setw(padding + textWidth) << gameDescription << std::endl;

    return 0;
}
