#include<iostream>
#include<conio.h>
#include <windows.h>
#include<stdlib.h>
#include<cmath>
#include "mylibrary.h"
using namespace mylib;
using namespace std;


   /* void gotoxy(short x,short y)

{
   COORD pos = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}*/




int main()
{

 //int row=20, col=15;
    int choice;
    do {
     
     
     
/*for(int i=0; i<row;i++)
    for(int j=0;j<col;j++)*/


     system("cls");
       
     box(5,20,5,75);
     box(1,24,1,79);
     
     

        gotoxy(34,5);
        cout << "Main Menu\n";
    
        gotoxy(34,6);
        cout<<"1 - Problem 1";
        
        gotoxy(34,7);
        cout<<"2 - Problem 2";
        
        gotoxy(34,8);
        cout<<"3 - Quadratic Roots";
        
        gotoxy(34,9);
        cout<<"4 - Square and Cube ";
        
        gotoxy(34,10);
        cout<<"5 - Area and Perimeter";
        
        gotoxy(34,11);
        cout<<"6 - Swapped Values";
        
        gotoxy(34,12);
        cout<<"7 - Gross Pay and Net Pay";
        
        gotoxy(34,13);
        cout<<"8 - Arithmetic Operations";
        
        gotoxy(34,14);
        cout<<"9 - Area and Circumference";
        
        gotoxy(34,15);
        cout<<"10 - Celcius to Fahrenheit";
        
        gotoxy(34,16);
        cout<<"11 - Total Sales";
        
        gotoxy(34,17);
        cout<<"12 - Change";
        
        gotoxy(34,18);
        cout<<"13 - Exit";
    
        gotoxy (34,19);
        cout<<"Enter your choice: ";
        cin>>choice;

      


        switch(choice) {

        case 1:

            avrg();
            avrg2(90,91,92,93);
            getch();
            break;



        case 2:
            quo();
            quo2(10,2);
            getch();
            break;

        case 3:
            quad();
            quad2(12,5,6);
            getch();
            break;

        case 4:
            squarecube();
            squarecube2(5);
            getch();
            break;

        case 5:
            areapermiteter();
            areapermiteter2(5,8);
            getch();
            break;

        case 6:
            swapped();
            swapped2(5,6);
            getch();
            break;

        case 7:
            GNpay();
            GNpay2(12,5);
            getch();
            break;

        case 8:
            arithop();
            arithop2(5,10);
            getch();
            break;

        case 9:
            ac();
            ac2(5);
            getch();
            break;

        case 10:
          
            cout<<fah();
            cout<<fah2(3);
            getch();
            break;

        case 11:
            cout<<totalsales();
            cout<<totalsales2(5,10);
            getch();
            break;

        case 12:
            cout<<change();
            cout<<change2(50,25);
            getch();
            break;

        case 13:
            system("cls");
            exit (0);
            getch();
            break;

        default:

            gotoxy(58,17);
            cout<<"Invalid choice";
            getch();
            break;
        }

    }
    while (choice);


    getch();
    return 0;
}











