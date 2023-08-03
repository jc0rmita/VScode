#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

bool binarySearch2D(int arr[][MAX_COLS], int rows, int cols, int target, int& row, int& col) {
    int left = 0, right = rows * cols - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
         row = mid / cols;
         col = mid % cols;
        if (arr[row][col] == target)
            return true;
        else if (arr[row][col] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

int main() {
    int rows, cols, target, row, col;
    cout << "Enter the number of rows in the array: ";
    cin >> rows;
    cout << "Enter the number of columns in the array: ";
    cin >> cols;
    int arr[MAX_ROWS][MAX_COLS];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    
   
    cout << "Enter the number to search for: ";
    cin >> target;
    bool found = binarySearch2D(arr, rows, cols, target, row, col);
    if (found)
        cout << "Element found in array at row"<<row+1<<" column "<<col+1;
    else
        cout << "Element not found in array";
    return 0;
}
