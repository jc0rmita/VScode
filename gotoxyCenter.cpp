#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void gotoxy (short x, short y)
{

    COORD pos ={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main(){

int choice;
    gotoxy(50.,2);
cout<<"Main Menu"<<endl;
gotoxy(50,3);
cout<<"1 - Print number from 1-10"<<endl;
gotoxy(50,4);
cout<<"2 - Print all even number numbers from 1 to N"<<endl;
gotoxy(50,5);
cout<<"3 - Display its factorial"<<endl;
gotoxy(50,6);
cout<<"4 - Display the N fibonacci series"<<endl;
gotoxy(50,7);
cout<<"5 - Display the reverse of the number"<<endl;
gotoxy(50,8);
cout<<"6 - Identify whether the word is a palindrome"<<endl;
gotoxy(50,9);
cout<<"7 - Convert a decimal number to binary number"<<endl;
gotoxy(50,10);
cout<<"8 - Sum of all even numbers from 1 to N"<<endl;
gotoxy(50,11);
cout<<"9 - Sum of all even numbers from 1 to N"<<endl;
gotoxy(50,12);
cout<<"10 - Print letters from A-Z";
gotoxy(50,13);
cout<<"11 - Exit\n";

gotoxy(50,14);
cout<<"Enter your choice: ";
cin>>choice;

return 0;
}