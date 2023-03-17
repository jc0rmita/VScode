#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(short x,short y)

{
   COORD pos = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main(){

int choice;
bool prime = true;

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

     system("cls");

    cout<<"Positivie, Negative, or Neutral"<<endl;
    cout<<"---------------------------------------"<<endl;
    
    int numA; 

    cout<<"Input a number:";
    cin>>numA;

    if (numA>0){
        cout<<"POSITIVE";
    }

    else{
        if(numA<0){
            cout<<"NEGATIVE";
        }
        else{
            cout<<"NEUTRAL";
        }
    
    }
    getch();
 break;
    
    case 2:
    system("cls");
 cout<<"Odd or Even"<<endl;
 cout<<"--------------------"<<endl;

    int numB;

    cout<<"Input a number: ";
    cin>>numB;

    if(numB%2==0){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
 getch();
    break;

case 3:
system("cls");

cout<<"Largest among 3 numbers"<<endl;
cout<<"----------------------------"<<endl;

int num1A, num2A, num3A;

cout<<"Input num1: ";
cin>>num1A;

cout<<"Input num2: ";
cin>>num2A;

cout<<"Input num3: ";
cin>>num3A;

if (num1A>num2A){
    if(num1A>num3A){
        cout<<num1A<<" is the largest"<<endl;
    }
}
    else if(num2A>num3A){
        cout<<num2A<<" is the largest"<<endl;
    }
    else{
        cout<<num3A<<" is the largest"<<endl;
    }

getch();
break;

case 4:
system("cls");

cout<<"Largest among 2 numbers"<<endl;
cout<<"--------------------------"<<endl;

int num1B, num2B;

cout<<"Input num1: ";
cin>>num1B;

cout<<"Input num2: ";
cin>>num2B;

if (num1B>num2B){
cout<<num1B<<" is the largest";}
else{
cout<<num2B<<" is the largest";
}
getch();
break;

case 5:
system("cls");
cout<<"Prime or Not"<<endl;
cout<<"----------------------"<<endl;

int numC;
//int i=2;

cout<<"Input a number: ";
cin>>numC;


if (numC<=1){
    prime = false;
}

else if(numC==2){
    prime = true;
}

else{
    for (int i=2; i<numC; i++){
        if (numC%i==0){
            prime = false;
            break;
        }
    }
}

if (prime){
    cout<<"Prime";
}
else{
    cout<<"Not Prime";
}
getch();
break;

case 6: 
system("cls");
cout<<"Compute the average grade"<<endl;
cout<<"---------------------------------"<<endl;

int prelim, midterm, finals, avrg;

cout<<"Input prelim: ";
cin>>prelim;

cout<<"Input midterm: ";
cin>>midterm;

cout<<"Input finals: ";
cin>>finals;

avrg = (prelim+midterm+finals)/3;

cout<<"Average grade = "<<avrg<<endl;

if(avrg>=75)
  cout<<"Passed";

  else
  cout<<"Failed";

  getch();
  break;

  case 7:
system("cls");

cout<<"Total sales + Commission"<<endl;
cout<<"-----------------------------------"<<endl;

int salesman_number, unit_sold, unit_price;
float commission, Total_sales;
char salesman_name[100];

 cout << "Input salesman number: ";
    cin>>salesman_number;
    
    cout<<"Input salesman name: ";
    cin>>salesman_name;
    
    cout<<"Input unit sold: ";
    cin>>unit_sold;
    
    cout<<"Input unit price: ";
    cin>>unit_price;
    
    Total_sales = unit_sold*unit_price;
    
   // cout<<"\nTotal sales = "<<Total_sales<<endl;
    
    if (Total_sales<=10000){
    
    commission= Total_sales*0.10;
    
    cout<<"\ncommission = "<<commission;
    }
    
    else if (Total_sales<=15000){
    
    commission= Total_sales*0.15;
    
    cout<<"\ncommission = "<<commission;
    }
    
    else if (Total_sales<=20000){
    commission= Total_sales*0.20;
    
    cout<<"\ncommission = "<<commission;
    }
    
    else{
    
    commission= Total_sales*0.30;
    
    cout<<"\ncommission = "<<commission;
    }
  
  getch();
  break;

 case 8:
   system("cls");

cout<<"Vowel or Consonant"<<endl;
cout<<"----------------------------"<<endl;

char c;

cout<<"input a letter: ";
cin>>c;

if(c=='A' || c=='a'){
    cout<<"Vowel";
}

else if(c=='E' || c=='e'){
    cout<<"Vowel";
}

else if(c=='I' || c=='i'){
    cout<<"Vowel";
}

else if(c=='O'|| c=='o'){
    cout<<"Vowel";
}

else if(c=='U' || c=='u'){
    cout<<"Vowel";
}

else{
    cout<<"Consonant";

}

getch();
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