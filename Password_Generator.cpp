#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random password
string generatePassword(int length) {
    const string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    srand(static_cast<unsigned int>(time(0)));
    
    string password;
    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % characters.length();
        password += characters[randomIndex];
    }
    
    return password;
}

int main() {
    cout << "Welcome to the Password Generator!" << endl;

    int passwordLength;
    cout << "Enter the desired length for the password: ";
    cin >> passwordLength;

    string password = generatePassword(passwordLength);

    cout << "Generated Password: " << password << endl;

    cout << "Thank you for using the Password Generator!" << endl;

    return 0;
}
