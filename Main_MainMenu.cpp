#include <iostream>
#include<conio.h>
#include <windows.h>
#include<stdlib.h>
#include<cmath>
#include "mylibrary.h"
using namespace mylib;
using namespace std;




int main(){

char choice1;
  string username, password;

    string un =  "jcormita";
    string pass = "jc123";
    int ctr = 1;

    
do{


    system("cls");

cout<<"Enter usename: ";
cin>>username;

cout<<"Enter password: ";
cin>>password;

if(username==un && password == pass){


do{
system("cls");

box(5,20,5,75);
box(1,24,1,79);

gotoxy(34,7); cout<<"Menu";
gotoxy(32,9); cout<<"A - Sequence";
gotoxy(32,10); cout<<"B - Selection";
gotoxy(32,11); cout<<"C - Loop";
gotoxy(32,12); cout<<"D - Nested Loop";
gotoxy(32,13); cout<<"E - One Dimensional Arrays";
gotoxy(32,14); cout<<"F - Two Dimensional Arrays";
gotoxy(32,15); cout<<"G - Recursive Functions";
gotoxy(32,16); cout<<"H - Structures";
gotoxy(32,17); cout<<"I - File Handling Exercise";
gotoxy(32,18); cout<<"J - Classes and Objects";
gotoxy(32,19); cout<<"K - Exit";
gotoxy(32,20); cout<<"Enter your choice: ";
cin>>choice1;


switch(choice1){
    
    
    case ('A'): case 'a':

    system("cls");

    
    char choice;
    do {


     system("cls");
       
     box(5,20,5,75);
     box(1,24,1,79);
     
     

        gotoxy(34,5);
        cout << "Main Menu\n";
    
        gotoxy(34,6);
        cout<<"A - Problem 1";
        
        gotoxy(34,7);
        cout<<"B - Problem 2";
        
        gotoxy(34,8);
        cout<<"C - Quadratic Roots";
        
        gotoxy(34,9);
        cout<<"D - Square and Cube ";
        
        gotoxy(34,10);
        cout<<"E - Area and Perimeter";
        
        gotoxy(34,11);
        cout<<"F - Swapped Values";
        
        gotoxy(34,12);
        cout<<"G - Gross Pay and Net Pay";
        
        gotoxy(34,13);
        cout<<"H - Arithmetic Operations";
        
        gotoxy(34,14);
        cout<<"I - Area and Circumference";
        
        gotoxy(34,15);
        cout<<"J - Celcius to Fahrenheit";
        
        gotoxy(34,16);
        cout<<"K - Total Sales";
        
        gotoxy(34,17);
        cout<<"L - Change";
        
        gotoxy(34,18);
        cout<<"M - Exit";
    
        gotoxy (34,19);
        cout<<"Enter your choice: ";
        cin>>choice;

      


        switch(choice) {

        case 'A': case 'a':

            avrg();
            avrg2(90,91,92,93);
            getch();
            break;



        case 'B': case 'b':
            quo();
            quo2(10,2);
            getch();
            break;

        case 'C': case 'c':
            quad();
            quad2(12,5,6);
            getch();
            break;

        case 'D': case 'd':
            squarecube();
            squarecube2(5);
            getch();
            break;

        case 'E': case 'e':
            areapermiteter();
            areapermiteter2(5,8);
            getch();
            break;

        case 'F': case 'f':
            swapped();
            swapped2(5,6);
            getch();
            break;

        case 'G': case 'g':
            GNpay();
            GNpay2(12,5);
            getch();
            break;

        case 'H': case 'h':
            arithop();
            arithop2(5,10);
            getch();
            break;

        case 'I': case 'i':
            ac();
            ac2(5);
            getch();
            break;

        case 'J': case 'j':
          
            cout<<fah();
            cout<<fah2(3);
            getch();
            break;

        case 'K':
            cout<<totalsales();
            cout<<totalsales2(5,10);
            getch();
            break;

        case 'L': case 'l':
        
            cout<<change();
            cout<<change2(50,25);
            getch();
            break;

        case 'M': case 'm':
       // main();
        break;
        

        default:

            gotoxy(58,17);
            cout<<"Invalid choice";
            getch();
            break;
        

    }
    
    }while (choice!='M' && choice!='m');
    

   // getch();
break;




//=====================================================================================================================================

case ('B'): case 'b':

{
system("cls");
char choice3;


do{

    system("cls");

    box(5,20,5,75);
     box(1,24,1,79);

gotoxy(34,7);
cout<<"Main Menu"<<endl;
gotoxy(32,8);
cout<<"A - Positive, Negative, or Neutral"<<endl;
gotoxy(32,9);
cout<<"B - Odd or Even"<<endl;
gotoxy(32,10);
cout<<"C - Largest among 3 numbers"<<endl;
gotoxy(32,11);
cout<<"D - Largest among 2 numbers"<<endl;
gotoxy(32,12);
cout<<"E - Prime or Not"<<endl;
gotoxy(32,13);
cout<<"F - Average Grade"<<endl;
gotoxy(32,14);
cout<<"G - Total sales + Commission"<<endl;
gotoxy(32,15);
cout<<"H - Vowel or Consonant"<<endl;
gotoxy(32,16);
cout<<"I - Exit"<<endl;
gotoxy(34,17);
cout<<"Enter your choice: ";
cin>>choice3;


switch(choice3){
    
    case 'A': case 'a':
    pnn();
    //pnn2(0);
    break;
    
    case 'B': case 'b':
    oddeven();
  // oddeven2(12);
    break;

case 'C': case 'c':

system("cls");
int num1A, num2A, num3A;

cout<<"Input num1: ";
cin>>num1A;

cout<<"Input num2: ";
cin>>num2A;

cout<<"Input num3: ";
cin>>num3A;

cout<<large3(num1A,num2A,num3A);
getch();
break;

case 'D': case 'd':

system("cls");
int num1B, num2B;

cout<<"Input num1: ";
cin>>num1B;

cout<<"Input num2: ";
cin>>num2B;
cout<<large2(num1B,num2B);
getch();
break;

case 'E': case 'e':
primenum();
break;

case 'F': case 'f':
system("cls");

int prelim, midterm, finals;

cout<<"Input prelim: ";
cin>>prelim;

cout<<"Input midterm: ";
cin>>midterm;

cout<<"Input finals: ";
cin>>finals;

avrg3(prelim, midterm, finals);
  break;


  case 'G': case 'g':
cout<<comm();
getch();
  break;

 case 'H': case 'h':
  vc();
break;
    
    
    case 'I':  case 'i': 
   // main();
    break;

  
    default:
    cout<<"Invalid choice";
    getch();
    break;
      


}

}while(choice3!='I' && choice3!='i');


break;

}


//=====================================================================================================================================

case ('C'): case 'c':

system("cls");

char choice4;
do{
    
    system("cls");

    box(5,20,5,75);
    box(1,24,1,79);

gotoxy(34,6);
cout<<"Main Menu"<<endl;
gotoxy(25,7);
cout<<"A - Print number from 1-10"<<endl;
gotoxy(25,8);
cout<<"B - Print all even number numbers from 1 to N"<<endl;
gotoxy(25,9);
cout<<"C - Display its factorial"<<endl;
gotoxy(25,10);
cout<<"D - Display the N fibonacci series"<<endl;
gotoxy(25,11);
cout<<"E - Display the reverse of the number"<<endl;
gotoxy(25,12);
cout<<"F - Identify whether the word is a palindrome"<<endl;
gotoxy(25,13);
cout<<"G - Convert a decimal number to binary number"<<endl;
gotoxy(25,14);
cout<<"H - Sum of all even numbers from 1 to N"<<endl;
gotoxy(25,15);
cout<<"I - Sum of square of all even numbers from 1 to N"<<endl;
gotoxy(25,16);
cout<<"J - Print letters from A-Z";
gotoxy(25,17);
cout<<"K - Exit"<<endl;

gotoxy(25,18);
cout<<"Enter your choice: ";
cin>>choice4;

switch (choice4){

case 'A': case 'a':
    printten();
    getch();
    break;

case 'B': case 'b':
even(10);
getch();
break;

case 'C': case 'c': 
cout<<factorial(6);
getch();
break;


case 'D': case 'd':
fib(5);
getch();
break;

case 'E': case 'e':
rev();
getch();
break;


case 'F': case 'f':
palindrome();
getch();
break;

case 'G': case 'g':
binary(5);
getch();
break;



case 'H': case 'h':
cout<<sumeven();
getch();
break;

case 'I': case 'i':
cout<<sumsquare(2,6);
getch();
break;

case 'J': case 'j':
az();
getch();
break;

case 'K': case 'k':
//main();
 break;


default:
gotoxy(34,18);
cout<<"Invalid choice";
getch();
break;

}//close of switch



   
}while(choice4!='K' && choice4!='k');
    

break;

//=============================================================================================================================
case 'D':
case 'd':

 char choiceD;
do{
    system("cls");
    cout<<"Main Menu\n";
    cout<<"Nested Loop Execise\n";
    cout<<"A - Nested For\n";
    cout<<"B - Nested While\n";
    cout<<"C - Nested Do While\n";
    cout<<"D - Exit\n";
    cout<<"Enter your choice: ";
    cin>>choiceD;

    switch (choiceD){

        case 'A':
        case 'a':
         system("cls");
         cout<<"Nested For\n";

         char choice1;
do{
    system("cls");
    cout<<"Main Menu\n";
    cout<<"Nested For\n";
    cout<<"A - Pyramid using [*]\n";
    cout<<"B - Inverted Pyramid using [*]\n";
    cout<<"C - Pyramid using numbers\n";
    cout<<"D - Inverted Pyramid using numbers\n";
    cout<<"E - Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice1;

    switch (choice1){

        case 'A':
        case 'a':

        system("cls");
        cout<<"Pyramid using [*]\n\n";
        for1(5);
        break;


        case 'B':
        case 'b':

        system("cls");
        cout<<"Inverted Pyramid using [*]\n\n";
        for2(5);
        break;


        case 'C':
        case 'c':

        system("cls");
        cout<<"Pyramid using numbers\n\n";
        for3(5);
        break;

        case 'D':
        case 'd':
        
        system("cls");
        cout<<"Inverte Pyramid using numbers\n\n";
        for4(5);
        break;


        case 'E':
        case 'e':
        system("cls");
       // main();
        break;


    }
    }
    while(choice1 != 'e' && choice1 != 'E');

        break;// break case A (nested for)


        case 'B':
        case 'b':

        system("cls");
        cout<<"Nested While\n";

        char choice2;
do{
    system("cls");
    cout<<"Main Menu\n";
    cout<<"Nested While\n";
    cout<<"A - Pyramid using [*]\n";
    cout<<"B - Inverted Pyramid using [*]\n";
    cout<<"C - Pyramid using numbers\n";
    cout<<"D - Inverted Pyramid using numbers\n";
    cout<<"E - Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice2;

    switch (choice2){

        case 'A':
        case 'a':

        system("cls");
        cout<<"Pyramid using [*]\n\n";
        while1(5);
        getch();
        break;


        case 'B':
        case 'b':

        system("cls");
        cout<<"Inverted Pyramid using [*]\n\n";
        while2(5);
        break;


        case 'C':
        case 'c':

        system("cls");
        cout<<"Pyramid using numbers\n\n";
        while3(5);
        break;

        case 'D':
        case 'd':
        
        system("cls");
        cout<<"Inverte Pyramid using numbers\n\n";
        while4(5);
        break;


        case 'E':
        case 'e':
        system("cls");
        
        break;


    }
    }
    while(choice2 != 'E' && choice2 != 'e');

        break;//break case B (nested while)

 
 
        case 'C':
        case 'c':

        system("cls");
        cout<<"Nested Do While\n";

        char choice3;
do{
    system("cls");
    cout<<"Main Menu\n";
    cout<<"Nested Do while\n";
    cout<<"A - Pyramid using [*]\n";
    cout<<"B - Inverted Pyramid using [*]\n";
    cout<<"C - Pyramid using numbers\n";
    cout<<"D - Inverted Pyramid using numbers\n";
    cout<<"E - Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice3;

    switch (choice3){

        case 'A':
        case 'a':

        system("cls");
        cout<<"Pyramid using [*]\n\n";
        dowhile1(5);
        break;


        case 'B':
        case 'b':

        system("cls");
        cout<<"Inverted Pyramid using [*]\n\n";
       dowhile2(5);
        break;


        case 'C':
        case 'c':

        system("cls");
        cout<<"Pyramid using numbers\n\n";
        dowhile3(5);
        break;

        case 'D':
        case 'd':
        
        system("cls");
        cout<<"Inverte Pyramid using numbers\n\n";
        dowhile4(5);
        break;


        case 'E':
        case 'e':
        system("cls");
        
        break;


    }
    }
    while(choice3 != 'E' && choice3 != 'e');
        break;//break case C (nested do while)



        case 'D':
        case 'd':

        system("cls");
        //main();
        break;


    }
    }
    while(choiceD!='D' && choiceD!='d');



//getch();
break;

//===========================================================================================================================
// ONe Dimentional AARray

case 'E': case 'e':

system("cls");

  char choice5;
    
do{
system("cls");




cout<<"Main Menu\n";
cout<<"A - Display all even\n";
cout<<"B - Largest three\n";
cout<<"C - Total Pos Neg\n";
cout<<"D - occurence\n";
cout<<"E - Most occured\n";
cout<<"F - Pyramid\n";
cout<<"G - Exit\n";
cout<<"Enter your choice: ";
cin>>choice5;





switch (choice5){

    case 'A': case 'a':
     
    Display_All_Even();

//=================================
    int num[10];
     
    cout<<"\n\n";

    for (int i=0; i<10;i++){
    cout<<"Enter a number "<<i+1<<": ";
    cin>>num[i];
    } 

    Display_All_Even(num);


    break;



    case 'B': case 'b':
    
    Largest_Three();

    int Array[10];
    
    cout<<"\n";

    for(int i=0;i<=9;i++){
    	cout<<"Enter a number "<<i+1<<" : ";
    	cin>>Array[i];
	}

     Largest_Three(Array);

      getch();
      break;



    case 'C': case 'c':
     
     Total_Pos_Neg();
     
//====================================================
    
     int array[10];

      cout<<"\n\n";

      for (int i=0; i<10; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> array[i];
    }

    Total_Pos_Neg(array);
   
    getch();
    break;




    case 'D': case 'd':

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
   getch();

    break;

    case 'E': case 'e':
    system("cls");
    int sizee;

    cout<<"Enter how many elements: ";
    cin>>sizee;

     int ar[100];

    cout<<"Enter the elements"<<endl;
     for(int i=0; i<sizee;i++)
     {
    
      cin>>ar[i];
     }
   
    cout<<"The most occured number is: " <<occurs(ar,sizee);

   getch();
    break;

    case 'F': case 'f':
    {
        system("cls");
        int row;

        cout<<"Enter row: ";
        cin>>row;

        pyramid(row);
        getch();
        break;
    }

   case 'G': case 'g':
   //main();
    break;

    default:
    cout<<"Invalid choice";
    getch();
    break;
}

}while(choice5!='G' && choice5!='g');


break;

//======================================================================================================================================
//Two Dimentional Array

{
    case 'F': case 'f':
    system ("cls");
    
   char choice6;

do{
system("cls");


cout<<"Main Menu\n";
cout<<"A - Display all even\n";
cout<<"B - Largest three\n";
cout<<"C - Total Pos Neg\n";
cout<<"D - occurence\n";
cout<<"E - Diagonal\n";
cout<<"F - Multiplication table\n";
cout<<"G - Exit\n";
cout<<"Enter your choice: ";
cin>>choice6;





switch (choice6){

    case 'A': case 'a': 
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



    case 'B': case 'b': 

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



    case 'C': case 'c': 
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




    case 'D': case 'd':

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


    case 'E': case 'e': 
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

    case 'F': case 'f': 
    {
      system("cls");
      int ar[10][10];
      mTable(ar);
      getch();
      break;
    }

    case 'G': case 'g': 
    // main();
    break;

    default:
    cout<<"Invalid choice";
    getch();
    break;
}
}while(choice6!='G' && choice6!='g');
    
}

    break;

//==============================================================================================================================
//Recursive function

case 'G': case 'g':{
system("cls");
char choice7;

do{
    system("cls");
cout<<"A - Recursive Factorial\n";
cout<<"B - Recursive Sum\n";
cout<<"c - Exit\n";
cout<<"Enter your choice: ";
cin>>choice7;

switch(choice7){

case 'A': case 'a':
{
    system("cls");
int m=1, n ;

    cout<<"Enter a number greater than zero(0): ";
    cin>>n;

    cout<< "\nfactorial is "<<recursive_fact(m,n);
}
getch();
break;

case 'B': case 'b':
{
system("cls");

int a, b;

     cout<<"Enter first number: ";
     cin>>a;

     cout<<"Enter second number: ";
     cin>>b;

     cout<< "Sum = " << recursive_sum(a,b);
     
     getch();
     break;
}

case 'C': case 'c':
{   

    //exit
    break;
}

   default:
   {
    cout<<"Invalid choice";
    getch();
   }  

}
}while(choice7 != 'C' && choice7 != 'c');

}

break;


//==============================================================================================================================
//Exit
case ('K'): case 'k':

system("cls");
exit(0);
getch();
break;

default:
gotoxy(32,14);cout<<"Invalid choice";
getch();
break;

}// close of switch



} while(choice1);
}
else{
    cout<<"Log in failed! please try again...";
    ctr++;

    if(ctr>3){
        system("cls");
        cout<<"Maxmimum login attempts reached. Exiting...";
        exit(0);
    }
    getch();
}

}while(username !=un || password != pass );


getch();
return 0;
}//close of int main