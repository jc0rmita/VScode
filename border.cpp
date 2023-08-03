#include <iostream>

void printBorder(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int width, height;

    std::cout << "Enter the width of the border: ";
    std::cin >> width;

    std::cout << "Enter the height of the border: ";
    std::cin >> height;

    printBorder(width, height);

    return 0;
}
