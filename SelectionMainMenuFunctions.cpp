#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <cmath>
#include "mylibrary.h"
using namespace mylib;
using namespace std;

void gotoxy(short x,short y)

{
   COORD pos = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}




int main(){

int choice;


do{
    system("cls");

gotoxy (60,0);
cout<<"Main Menu"<<endl;
gotoxy(50,2);
cout<<"1 - Positive, Negative, or Neutral"<<endl;
gotoxy(50,3);
cout<<"2 - Odd or Even"<<endl;
gotoxy(50,4);
cout<<"3 - Largest among 3 numbers"<<endl;
gotoxy(50,5);
cout<<"4 - Largest among 2 numbers"<<endl;
gotoxy(50,6);
cout<<"5 - Prime or Not"<<endl;
gotoxy(50,7);
cout<<"6 - Average Grade"<<endl;
gotoxy(50,8);
cout<<"7 - Total sales + Commission"<<endl;
gotoxy(50,9);
cout<<"8 - Vowel or Consonant"<<endl;
gotoxy(50,10);
cout<<"9 - Exit"<<endl;
gotoxy(55,12);
cout<<"Enter your choice: ";
cin>>choice;


switch(choice){
    
    case 1:
    pnn();
    pnn2(0);
    break;
    
    case 2:
    oddeven();
    oddeven2(12);
    break;

case 3:
cout<<large3(11,23,55);
getch();
break;

case 4:
cout<<large2(5,10);
getch();
break;

case 5:
primenum();
break;

case 6: 
avrg(95,97,99);
  break;

  case 7:
cout<<comm();
getch();
  break;

 case 8:
  vc();
break;
    
    
    case 9:
   system("cls");
    exit(0);
    getch();

   
    break;


}
}while(choice);
    return 0;
}