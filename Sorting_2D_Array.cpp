/*#include <iostream>
using namespace std;

int main(){

    

int row, column;
int arr[100][100];


cout<<"Enter row: ";
cin>>row;
cout<<"Enter column: ";
cin>>column;


for (int i=0; i<row;i++)
{
    for(int j=0; j<column;j++)
    {
        cin>>arr[i][j];
        cout<<arr[i][j];
    }
    
}


    return 0;
}*/


#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    // Input values for the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter the value for element (" << i << "," << j << "): ";
            cin >> arr[i][j];
        }
    }

    // Sort the 2D array row-wise
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols-1; j++) {
            for (int k = j+1; k < cols; k++) {
                if (arr[i][j] > arr[i][k]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }

    // Print the sorted 2D array
    cout << "The sorted 2D array is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
