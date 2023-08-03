#include <iostream>
using namespace std;

int main() {

    int array[10];
    int totalP = 0, totalN = 0; // Initialize both variables to 0

    // Input the contents of the array
    for (int i=0; i<10; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> array[i];
    }

    // Compute the sum of positive and negative numbers
    for (int i=0; i<10; i++) {
        if (array[i] > 0) {
            totalP += array[i];
        }
        else {
            totalN += array[i];
        }
    }

    // Output the results
    cout << "The sum of positive numbers is: " << totalP << endl;
    cout << "The sum of negative numbers is: " << totalN << endl;

    return 0;
}