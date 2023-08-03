#include <iostream>
#include <string>
#include <conio.h>
using namespace std;



int main(){

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




cout<<"login success!";


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

    return 0;
}