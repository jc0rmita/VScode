#include<iostream>
#include <conio.h>
 using namespace std;

int main(){
	int arr[10], rows;
	cout << "Displaying the even and odd numbers:" << endl << endl;
	

	for (int i = 0; i < 10; i++){
		cout << "Enter the element " << i+1 << " : ";
		cin >> arr[i];
	}

	cout << "\n\nThe even numbers in the array are: ";
	for (int j = 0; j < 10; j++){
		if (arr[j] % 2 == 0){
			cout << arr[j] << ", ";
		}
	}

	cout << "\nThe odd numbers in the array are: ";
	for (int q = 0; q < 10; q++){
		if (arr[q] % 2 == 1){
			cout << arr[q] << ", ";
		}
	}
	getch();
	
	cout << "\n\nDisplaying the sum of even and odd numbers:" << endl << endl;
	int array[10], evenn = 0, oddd = 0;

	

	for (int b = 0; b < 10; b++){
		cout << "Enter the element " << b+1 << " : ";
		cin >> array[b];
	}

	for (int c = 0; c < 10; c++){
		if (array[c] % 2 == 0){
			evenn += array[c];
		} else if (array[c] % 2 == 1){
			oddd += array[c];
		}
	}

	cout << "\n\nThe sum of even numbers in the array are: " << evenn << endl;
	cout << "The sum of odd numbers in the array are:  " << oddd;

	getch();
	

	cout << "\n\nDisplaying how many even and odd numbers:" << endl << endl;
	int arrayNum[10], eve = 0, od = 0;

	

	for (int t = 0; t < 10; t++){
		cout << "Enter the element " << t+1 << " : ";
		cin >> arrayNum[t];
	}

	for (int y = 0; y < 10; y++){
		if (arrayNum[y] % 2 == 0){
			eve += 1;
		} else if (arrayNum[y] % 2 == 1){
			od += 1;
		}
	}

	cout << "\n\nThe even numbers in the array are: " << eve << endl;
	cout << "The odd numbers in the array are:  " << od;

	getch();
	//clrscr();

	getch();
	//clrscr();

	return 0;
}