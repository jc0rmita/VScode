#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;


void sqr1(void){

system("cls");

    int n1, sqr;
     cout<<" Enter a number: ";
     cin>>n1;

     sqr = n1* n1;

     cout<<sqr;

     getch();
     
}



int sqr2 (void){
    system("cls");

    int n2, sqr2;
     cout<<" Enter a number: ";
     cin>>n2;

     sqr2 = n2* n2;

     //cout<<sqr3;
     return sqr2;

     getch();
}




void sqr3(int n2){
    system("cls");

    int sqr2;
     //cout<<" Enter a number: ";
     //cin>>n2;

     sqr2 = n2* n2;

     cout<<sqr2;

     getch();
}


int sqr4(int n4){

    system("cls");

    int sqr4;
     //cout<<" Enter a number: ";
     //cin>>n4;

     sqr4 = n4* n4;

     //cout<<sqr4;
     return sqr4;
     getch();

}



int main(){

char choice;

do{
    system("cls");

cout<<"Menu"<<endl;
cout<<"A -Square of the number ( function w/o args that does returns a value)"<<endl;
cout<<"B -Square of he number ( function w/o args that does returns a value)"<<endl;
cout<<"C -Square if the number (functions w/ args that does not returns a value)"<<endl;
cout<<"D -Square of the number ( function w/ args that return a valaue)"<<endl;
cout<<"E -Exit"<<endl;
cout<<"Enter your choice: ";
cin>>choice;

switch(choice){

    case 'A':
    sqr1();
     break;


    case 'B':
     cout<<sqr2();
     getch();
     break;



    case 'C':
     sqr3(2);
     break;



    case 'D':
     cout<<sqr4(3);
     getch();
    break;


case 'E':
system("cls");
exit(0);
getch();
break;

default:
cout<<"Invalid choice";
getch();
break;



}// close of switch


}while(choice);



return 0;
}// close of int main