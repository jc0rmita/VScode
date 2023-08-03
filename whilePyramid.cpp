#include <iostream>
using namespace std;

int main(){

// pyramid of "*"
    int x=1;

    while (x<=5) {

        int y=1;
        while (y<=x){
            cout<<"*";
             y++;
        }
        cout<<endl;
        x++;
    }

cout<<"=====================\n";
//inverted pyramid of "*"

{
int x=5;

while (x>=1){

    int y=1;

    while (y<=x){
        cout<<"*";
        y++;
    }
    x--;
    cout<<endl;
}
}

cout<<"====================\n";
//pyramid of numbers

{
int x=1;

while (x<=5){
    
    int y=1;

    while(y<=x){
        cout<<y;
        y++;
    } 
    x++;
    cout<<endl;
}

}

cout<<"======================\n";
//inverted pyramid of numbers
{
int x=5;
while(x>=1){

    int y=1;
    while(y<=x){
        cout<<y;
        y++;
    }


    x--;
    cout<<endl;  
}
}
      
}
