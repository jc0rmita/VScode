#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <process.h>
#include <cstring>
#include <string>

using namespace std;

void gotoxy (short x, short y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}


int main(){

  
    int choice;
do{
    system("cls");
gotoxy(63,1);
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
cout<<"9 - Sum of square of all even numbers from 1 to N"<<endl;
gotoxy(50,12);
cout<<"10 - Print letters from A-Z";
gotoxy(50,13);
cout<<"11 - Exit"<<endl;

gotoxy(60,14);
cout<<"Enter your choice: ";
cin>>choice;

switch (choice){

case 1:
system("cls");
{
cout<<"Print number from 1-10"<<endl;
cout<<"-------------------------------"<<endl;

int count = 0;

for (int i = 1; i<=10; i++){

    count = count + 1;
    cout<<count<<endl;
}
}
    getch();
    break;

case 2:
system("cls");
{
cout<<" Print all even number numbers from 1 to N"<<endl;
cout<<"------------------------------------------------------------------------------"<<endl;

int N;
int counter2 = 2;

cout<<"Input a number: ";
cin>>N;

while(counter2<=N){
    cout<<counter2<<endl;
    counter2 = counter2 + 2;
    
}
}
getch();
break;

case 3:
system("cls");
{
cout<<"Display its factorial"<<endl;
cout<<"------------------------------"<<endl;

int num, fact = 1;

cout << "Enter a positive integer: ";
cin >> num;

int i = 1;
do {
fact = fact * i;
i++;
} while (i <= num);

cout << "Factorial of " << num << " is " << fact << endl;
}
getch();
break;


case 4:
{
system("cls");

cout<<"Display the N fibonacci series."<<endl;
cout<<"------------------------------------"<<endl;

int n1, count=1, a=0, b=1, c=0;

cout<<"Input a number: ";
cin>>n1;

do{

cout<<a;

c=a+b;
a=b;
b=c;
count++;

}
while(count<=n1);

}
getch();
break;

case 5:
{
system("cls");
cout<<"Display the reverse of the number."<<endl;
cout<<"-----------------------------------------------------------------------------------------------"<<endl;

int n2, r, rev=0;

cout<<"Input a number: ";
cin>>n2;

while(n2!=0){
r = n2 % 10;
rev = rev * 10 + r;
n2= n2/10;

}
cout<<rev;
}
getch();
break;


case 6:
{
system("cls");
cout<<"Identify whether the word is a palindrome."<<endl;
cout<<"-----------------------------------------------------------------------------------------------"<<endl;

string w;
string rev2="";
int i, length;

cout<<"Input a word: ";
cin>>w;

length = w.length();

i = length - 1;

while(i>=0){
    rev2 = rev2 + w[i];
    i--;
}

if (w==rev2)
cout<<w<<" is a palindrome";
else
cout<<w<<" is not a palindrome";
}
getch();
break;

case 7:
{
system("cls");
cout<<"Convert a decimal number to binary number"<<endl;
cout<<"----------------------------------------------------"<<endl;

int n, remainder, count2=0, i=0, binaryno=0;

cout<<"Input a decimal number: ";
cin>>n;

while(n!=0){

    count2++;
    remainder = n%2;
    n=n/2;
    int a[count2]={remainder};
    cout<<remainder;
}
getch();
break;

}

case 8:
{
system("cls");

cout<<"Sum of all even numbers from 1 to N."<<endl;
cout<<"-----------------------------------------"<<endl;

int n3, count3=1, sum=0;

cout<<"Input a number: ";
cin>>n3;

while(count3<=n3){

    if (count3%2==0){
    sum+=count3;   
    }
    count3++;   
}

cout<<sum;
}
getch();
break;

case 9:
{
system("cls");
cout<<"Sum of the square of all even number from N to M. The value of N must be less than the value of M."<<endl;
cout<<"---------------------------------------------------------------------------------------------------------"<<endl;

int n4, n5, sum2=0, sqr;

cout<<"Input first number: ";
cin>>n4;

cout<<"Input second number (must be smaller than the first number): ";
cin>>n5;

if(n4<n5){

while(n4<=n5){
if(n4%2==0){
    sqr=n4*n4;
    sum2= sum2+sqr;
}
n4++;
}
cout<<sum2;
}

}

getch();
break;

case 10:
{
system("cls");
cout<<"Print letters from A-Z."<<endl;
cout<<"--------------------------------"<<endl;

for (char c = 'A';c<='Z';c++)
    cout<<c<<" ";


}
getch();
break;

case 11:
system("cls");
exit(0);
getch();
break;


default:
gotoxy(55,9);
cout<<"Invalid choice";
getch();
break;

}
    }while(choice);
return 0;
}
