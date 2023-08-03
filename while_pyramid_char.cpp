#include <iostream> 
using namespace std;


void pyramid(int row){
 
char x=65;


while (x<row+65){
    
    char y='A';

    while(y<=x){
        cout<<x<<" ";
       y ++;
    } 
    x++;
    cout<<endl;
}

}

int main(){


int row;
cout<<"Enter row: ";
cin>>row;

pyramid(row);


    return 0;
}