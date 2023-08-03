#include <iostream>
#include <conio.h>
#include <cmath>
#include <windows.h>
using namespace std;

void gotoxy(short x,short y)

{
   COORD pos = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void Display_All_Even(void){
 //Array even numbers

 system("cls");

    int num[10];

for (int i=0; i<10;i++){
    cout<<"Enter a number "<<i+1<<": ";
    cin>>num[i];
    
    }

cout<<"\n";

for (int i=0; i<10; i++){
   
    if (num[i] % 2 == 0){
       cout<<"Even number is: "<<num[i]<<endl;
       }
    }
    
}



void Display_All_Even(int num[]){
cout<<"\n";
 

for (int i=0; i<10; i++){
   
    if (num[i] % 2 == 0){
       cout<<"Even number is: "<<num[i]<<endl;
       }
    }

    getch();
}

void Display_All_Even(int arrays[][100], int row, int column){

for (int i=0;i<row;i++){
    for (int j=0;j<column;j++){
      if (arrays[i][j]%2==0){
        cout<<"Even number is: "<<arrays[i][j]<<endl;
      }
    }
  }
getch();
}
//=====================================================================================

void Largest_Three(void){

    system("cls");


    int Array[10],num1=0,num2=0,num3=0;
	
    //int i=0;

    for(int i=0;i<=9;i++){
    	cout<<"Enter a number "<<i+1<<" : ";
    	
    	cin>>Array[i];
	}
	
	cout<<"\nThe three largest numbers are : "<<endl;
	for(int i=0;i<=9;i++){
		if(Array[i]>num1){
		 num3=num2;
		 num2=num1;
		 num1=Array[i];
		 
		 }
		 
		else if(Array[i]>num2){
		 num2=num1;
		 num1=Array[i];
		 
		}
		
		else if(Array[i]>num3){
		 num3=Array[i];
		 
		 }       
}

     cout<<num1<<endl;
     cout<<num2<<endl;
     cout<<num3<<endl;



}

void Largest_Three( int Array[]){

    
    int num1=0,num2=0,num3=0;
	
    //int i=0;

    
	
	cout<<"\nThe three largest numbers are : "<<endl;
	for(int i=0;i<=9;i++){
		if(Array[i]>num1){
		 num3=num2;
		 num2=num1;
		 num1=Array[i];
		 
		 }
		 
		else if(Array[i]>num2){
		 num2=num1;
		 num1=Array[i];
		 
		}
		
		else if(Array[i]>num3){
		 num3=Array[i];
		 
		 }       
}

     cout<<num1<<endl;
     cout<<num2<<endl;
     cout<<num3<<endl;

}

void Largest_Three(int Array1[][100], int roww, int columnn){

    int num1=0, num2=0, num3=0;

        cout<<"\nThe Three Largest number are: \n";

        for(int i=0; i<5;i++){
            for(int j=0; j<2;j++){

                if (Array1[i][j]>num1){

                    num3=num2;
                    num2=num1;
                    num1=Array1[i][j];

                }

                else if(Array1[i][j]>num2){
                    num2=num1;
                    num1=Array1[i][j];
                }

                else if(Array1[i][j]>num3){
                    num3=Array1[i][j];
                }
            }
        }

        cout<<num1<<endl;
        cout<<num2<<endl;
        cout<<num3<<endl;

        getch();
    }



 //===============================================================================================================
 void Total_Pos_Neg(void){
    
    system("cls");

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
    cout << "\nThe sum of positive numbers is: " << totalP << endl;
    cout << "The sum of negative numbers is: " << totalN << endl;

 }

void Total_Pos_Neg(int array[] ){
    
    
cout<<"\n";
    
    int totalP = 0, totalN = 0; // Initialize both variables to 0

    // Input the contents of the array
   

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

 }

 void Total_Pos_Neg(int ar[][100], int roow, int coolumn){

    int totalP=0, totalN=0;

   

    for(int i=0;i<roow;i++){
        for(int j=0;j<coolumn;j++){
            if (ar[i][j]>0){
                totalP += ar[i][j];

            }
            else{
                totalN += ar[i][j];
            }
        }
    }

    cout<<"\nThe sum of all positive numbers is: "<<totalP<<endl;
    cout<<"The sum of all negative numbers is: "<<totalN<<endl;
 }

//===============================================================
 void Count_Int(int arr[], int size, int no){


    int count=0;

   for (int i=0; i<size; i++){
    if(arr[i]==no){
        count +=1; 
    }
   }

    if (count>0){
        cout<<"\nThe occurrences of "<<no<<" in the array are: "<<count;
    }
    else{
        cout<<"\nThere is no occurences of "<< no<< " int he array";
    }
 getch();
 }
 
void Count_Int(int arr1[][100], int rows, int columns){

int no, count=0;


   cout<<"\n\nEnter a number: ";
   cin>>no;


   for (int i=0; i<rows; i++){
    for(int j=0;j<2;j++){
    if(arr1[i][j]==no){
        count +=1;
        
    }
   }
   }
    if (count>0){
        cout<<"\nThe occurrences of "<<no<<" in the array are: "<<count;
    }
    else{
        cout<<"\nThere is no occurences of "<< no<< " in the array";
    }

getch();


}



int main(){
    int choice;

do{
system("cls");


cout<<"Main Menu\n";
cout<<"1 - Display all even\n";
cout<<"2 - Largest three\n";
cout<<"3 - Total Pos Neg\n";
cout<<"4 - occurence\n";
cout<<"5 - Exit\n";
cout<<"Enter your choice: ";
cin>>choice;





switch (choice){

    case 1: 
     
    Display_All_Even();
//=================================
    int num[10];
     
     cout<<"\n\n";
    for (int i=0; i<10;i++){
    cout<<"Enter a number "<<i+1<<": ";
    cin>>num[i];
    } 

    Display_All_Even(num);

//=======================================
   int arrays[100][100], row, column;

    cout<<"\n\nEnter row size: ";
   cin>>row;

   cout<<"Enter column size: ";
   cin>>column;

   cout<<"\n";

  for(int i=0;i<row;i++){
    cout<<"Row"<<i+1<<": \n";
    for(int j=0;j<column;j++){
      cout<<"Enter a number for row: "<<i+1<<" and column "<<j+1<<": ";
      cin>>arrays[i][j];
    }
  }

  Display_All_Even(arrays,row, column);
  getch();

    break;



    case 2:

    
    Largest_Three();

    int Array[10];
    
    cout<<"\n";
    for(int i=0;i<=9;i++){
    	cout<<"Enter a number "<<i+1<<" : ";
    	
    	cin>>Array[i];
	}

    Largest_Three(Array);

    //=============================================

    int Array1[100][100], roww, columnn;
   cout<<"\n\nEnter row size: ";
   cin>>roww;

   cout<<"Enter column size: ";
   cin>>columnn;

   cout<<"\n";

  for(int i=0;i<roww;i++){
    cout<<"Row"<<i+1<<": \n";
    for(int j=0;j<columnn;j++){
      cout<<"Enter a number for row: "<<i+1<<" and column "<<j+1<<": ";
      cin>>Array1[i][j];
    }
  }

    Largest_Three(Array1,roww,columnn);

    break;



    case 3:
     
     Total_Pos_Neg();
     cout<<"\n\n";
//====================================================
     int array[10];

      for (int i=0; i<10; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> array[i];
    }
    Total_Pos_Neg(array);
//====================================================

    int ar[100][100], roow, coolumn;

   cout<<"\n\nEnter row size: ";
   cin>>roow;

   cout<<"Enter column size: ";
   cin>>coolumn;

   cout<<"\n";

  for(int i=0;i<roow;i++){
    cout<<"Row"<<i+1<<": \n";
    for(int j=0;j<coolumn;j++){
      cout<<"Enter a number for row: "<<i+1<<" and column "<<j+1<<": ";
      cin>>ar[i][j];
    }
  }

    Total_Pos_Neg(ar,roow,coolumn);

    getch();

    break;




    case 4:

    system("cls");

    int arr[100], no, size;

     cout<<"Enter size: ";
    cin>>size;

    cout<<"\n";

   for (int i=0; i<size;i++) {
    
    cout<<"Enter Element "<<i+1<<": ";
    cin>>arr[i];
}

    cout<<"\nEnter a number: ";
    cin>>no;

    Count_Int(arr,size,no);

//===================================================
    int arr1[100][100], rows, columns;

cout<<"\n\n========================================";
   cout<<"\n\nEnter row size: ";
   cin>>rows;

   cout<<"Enter column size: ";
   cin>>columns;

   cout<<"\n";

   for (int i=0; i<rows;i++) {
   
    cout<<"Row"<<i+1<<": \n";
    

    for(int j=0;j<columns;j++){
     
     cout<<"Enter a number row "<<i+1<<" column "<<j+1<<": ";

     cin>>arr1[i][j];
   }
   }

    Count_Int(arr1,rows,columns);



    break;

    case 5:
    system("cls");
    exit(0);
    break;
}
}while(choice);
    return 0;
}