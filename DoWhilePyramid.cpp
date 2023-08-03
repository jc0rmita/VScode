#include <iostream>
using namespace std;

int main(){
//pyramid of "*"

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
while(x<=5);




cout<<"============================\n";
//inverted pyramid of "*"

{
 int x=5;
 do{

int y=1;
do{
    cout<<"*";
    y++;
}
while (y<=x);

x--;
cout<<endl;


 }
    while(x>=1);

}

cout<<"=========================\n";
//pyramid of numbers

{

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
while(x<=5);
}

cout<<"====================\n";
//inverted pyramid of numbers

{
int x=5;
do{
    int y=1;
    do{
        cout<<y;
        y++;

    }
    while (y<=x);
    x--;
    cout<<endl;

}
while(x>=1);

}


return 0;

}