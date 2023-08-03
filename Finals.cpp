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

do{
system("cls");

box(5,20,5,75);
box(1,24,1,79);

gotoxy(34,7); cout<<"Menu";
gotoxy(32,9); cout<<"A - Sequence";
gotoxy(32,10); cout<<"B - Selection";
gotoxy(32,11); cout<<"C - Loop";
gotoxy(32,12); cout<<"D - Nested Loop";
gotoxy(32,13); cout<<"E - Exit";
gotoxy(32,14); cout<<"Enter your choice: ";
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

        case 'A':

            avrg();
            avrg2(90,91,92,93);
            getch();
            break;



        case 'B':
            quo();
            quo2(10,2);
            getch();
            break;

        case 'C':
            quad();
            quad2(12,5,6);
            getch();
            break;

        case 'D':
            squarecube();
            squarecube2(5);
            getch();
            break;

        case 'E':
            areapermiteter();
            areapermiteter2(5,8);
            getch();
            break;

        case 'F':
            swapped();
            swapped2(5,6);
            getch();
            break;

        case 'G':
            GNpay();
            GNpay2(12,5);
            getch();
            break;

        case 'H':
            arithop();
            arithop2(5,10);
            getch();
            break;

        case 'I':
            ac();
            ac2(5);
            getch();
            break;

        case 'J':
          
            cout<<fah();
            cout<<fah2(3);
            getch();
            break;

        case 'K':
            cout<<totalsales();
            cout<<totalsales2(5,10);
            getch();
            break;

        case 'L':
            cout<<change();
            cout<<change2(50,25);
            getch();
            break;

        case 'M': 
        main();
        break;
        

        default:

            gotoxy(58,17);
            cout<<"Invalid choice";
            getch();
            break;
        

    }
    
    }while (choice);
    

    getch();
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
    
    case 'A':
    pnn();
    pnn2(0);
    break;
    
    case 'B':
    oddeven();
    oddeven2(12);
    break;

case 'C':
cout<<large3(11,23,55);
getch();
break;

case 'D':
cout<<large2(5,10);
getch();
break;

case 'E':
primenum();
break;

case 'F': 
avrg(95,97,99);
  break;

  case 'G':
cout<<comm();
getch();
  break;

 case 'H':
  vc();
break;
    
    
    case 'I' :  
    main();
    break;

  
    default:
    cout<<"Invalid choice";
    getch();
    break;
      


}

}while(choice3);


getch();
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

case 'A':
    printten();
    getch();
    break;

case 'B':
even(10);
getch();
break;

case 'C':
cout<<factorial(6);
getch();
break;


case 'D':
fib(5);
getch();
break;

case 'E':
rev();
getch();
break;


case 'F':
palindrome();
getch();
break;

case 'G':
binary(5);
getch();
break;



case 'H':
cout<<sumeven();
getch();
break;

case 'I':
cout<<sumsquare(2,6);
getch();
break;

case 'J':
az();
getch();
break;

case 'K':
main();
 break;


default:
gotoxy(34,18);
cout<<"Invalid choice";
getch();
break;

}//close of switch



   
}while(choice4);
    

getch();
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
        main();
        break;


    }
    }
    while(choiceD);





//getch();
break;






//==============================================================================================================================
case ('E'): case 'e':

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


getch();
return 0;
}//close of int main