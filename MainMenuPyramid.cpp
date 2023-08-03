#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
 



 void gotoxy (short x, short y)
{

    COORD pos ={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

//============================================================================================================================
//function of nested for

void for1(int z) {
        for (int x=1; x <= z; x++) {
        for (int y = 1; y <= x; y++) 
            cout << "*";
        cout << endl;
    }
    getch();
}


void for2(int x) {
        for (x; x >= 1; x--) {
        for (int y = 1; y <= x; y++) 
            cout << "*";
        
        cout << endl;
    }
    getch();
}


void for3(int z) {
        for (int x=1; x <= z; x++) {
        for (int y = 1; y <= x; y++) 
            cout << y;
        
        cout << endl;
    }
    getch();
}


void for4(int x){
    for(x; x>=1; x--){
        for(int y=1; y<=x; y++)
            cout<<y;
        cout<<endl;
    }
    getch();
}

//=============================================================================================================================    
//function of nested while

void while1(int z){
    
    int x=1;
    while (x<=z){
        int y=1;

        while(y<=x){
            cout<<"*";
            y++;
        }
        x++;
        cout<<endl;
    }
   getch();

}

void while2(int x){

    while(x>=1){
        int y=1;
        while (y<=x){
            cout<<"*";
            y++;
        }
        x--;
        cout<<endl;
    }
    getch();
}

void while3(int z){

    int x=1;
    while(x<=z){
        int y=1;
        while(y<=x){
            cout<<y;
            y++;
        }
        x++;
        cout<<endl;
    }
    getch();
}

void while4(int x){

    while(x>=1){
        int y=1;
        while(y<=x){
            cout<<y;
            y++;
        }
        x--;
        cout<<endl;
    }
    getch();
}

//=================================================================================================================================
//function of nested do while

void dowhile1(int z){

    int x=1;
    do{
        int y=1;
        do{
            cout<<"*";
            y++;
        }
        while(y<=x);
        x++;
    cout<<endl;

    }
    while(x<=z);   

    getch();
}


void dowhile2(int x){

    do {
        int y=1;
        do{
            cout<<"*";
            y++;
        }
        while(y<=x);

        x--;
        cout<<endl;
    }
    while(x>=1);

    getch();
}

void dowhile3(int z){

    int x=1;
    do{
        int y=1;
        do{
            cout<<y;
            y++;
        }
        while(y<=x);
        x++;
        cout<<endl;
    }
    while(x<=z);

    getch();
}


void dowhile4(int x){

    do{
        int y=1;
        do{
            cout<<y;
            y++;
        }
        while(y<=x);
        x--;
        cout<<endl;
    }
    while(x>=1);

    getch();
}
 int main(){
    
     
     char choice;
do{
    system("cls");
    cout<<"Main Menu\n";
    cout<<"Nested Loop Execise\n";
    cout<<"A - Nested For\n";
    cout<<"B - Nested While\n";
    cout<<"C - Nested Do While\n";
    cout<<"D - Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch (choice){

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
        main();
        break;

        default:
        cout<<"Invalid choice";
        getch();
        break;


    }
    }
    while(choice1);

        break;// break case A (nested for)

//===============================================================================================================================
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
        main();
        break;

default:
        cout<<"Invalid choice";
        getch();
        break;


    }
    }
    while(choice2);

        break;//break case B (nested while)

//===============================================================================================================================
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
        main();
        break;

        default:
        cout<<"Invalid choice";
        getch();
        break;


    }
    }
    while(choice3);
        break;//break case C (nested do while)
//================================================================================================================================
        case 'D':
        case 'd':

        system("cls");
        exit(0);
        break;

        default:
        cout<<"Invalid choice";
        getch();
        break;



    }
    }
    while(choice);

    return 0;
 }