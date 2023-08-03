//JHON CARL T. ORMITA 
//BSIT 1-1 

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



void Display_All_Even(int arrays[][100], int row, int column){

 cout<<"\nEven number is: ";  
for (int i=0;i<row;i++){
    for (int j=0;j<column;j++){
      if (arrays[i][j]%2==0){
        cout<<arrays[i][j]<<", ";
      }
    }
  }
getch();
}
//=====================================================================================


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
 
 
void Count_Int(int arr1[][100], int rows, int columns){

int no, count=0;


   cout<<"\n\nEnter a number: ";
   cin>>no;


   for (int i=0; i<rows; i++){
    for(int j=0;j<columns;j++){
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

void diagonal(int a[][100], int rows, int cols){

int Pdiagonal=0, Sdiagonal=0;


 for(int i=0;i<rows;i++)
    {
      cout<<endl;
      for(int j=0;j<cols;j++)
      {
        cout<<a[i][j]<<" ";
      }
    }



for (int i=0; i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        if(i==j)
        {
            Pdiagonal += a[i][j];

        }
        if( i == rows-j-1)
        {
            Sdiagonal += a[i][j];
        }
    }
}



cout<<"\nThe sum for Principal diagonal is: "<<Pdiagonal;
cout<<"\nThe sum for Secondary diagonal is: "<<Sdiagonal;


}

void mTable(int ar[10][10]){
int total=10;

for(int i=1;i<=total;i++)
{
    for(int j=1; j<=total;j++)
    {
        ar[i][j] = i*j;
        
    }
}

for(int i=1;i<=total;i++)
{
    for(int j=1;j<=total;j++)
    {
        cout<<" "<<ar[i][j]<<"\t";
    }
    cout<<endl;
}

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
cout<<"5 - Diagonal\n";
cout<<"6 - Multiplication table\n";
cout<<"7 - Exit\n";
cout<<"Enter your choice: ";
cin>>choice;





switch (choice){

    case 1: 
    system("cls");

   int arrays[100][100], row, column;

    cout<<"\nEnter row size: ";
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

    system("cls");

    int Array1[100][100], roww, columnn;
   cout<<"Enter row size: ";
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
    system("cls");

    int ar[100][100], roow, coolumn;

   cout<<"Enter row size: ";
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

    int arr1[100][100], rows, columns;

   
   cout<<"Enter row size: ";
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
    {
      system("cls");
      int a[100][100],rows,cols;

    cout<<"Enter rows: ";
    cin>>rows;

   cout<<"Enter cols: ";
   cin>>cols;



    cout<<"Enter element:"<<endl;
     for(int i=0; i<rows;i++)
    {
    for(int j=0; j<cols;j++)
       {
        cin>>a[i][j];
       }
    }

    diagonal(a,rows,cols);
     getch();
     break;

    }

    case 6:
    {
      system("cls");
      int ar[10][10];
      mTable(ar);
      getch();
      break;
    }

    case 7:
    system("cls");
    exit(0);
    break;

    default:
    cout<<"Invalid choice";
    getch();
    break;
}
}while(choice);
    return 0;
}