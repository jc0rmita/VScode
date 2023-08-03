#include <iostream>
#include <windows.h>
#include <dos.h>
using namespace std;

int main(){
/*int row;
    cout<<"enter row:";
    cin>>row;

    char x=65;
while (x<row+65){

        int y = 65;
        while (y<=x){
            cout<<x;
             y++;
        }
        cout<<endl;
        x++;

        
    }*/


//=======================================
/*
    int row;

    cout<<"Enter row: ";
    cin>>row;
   
  char b = 'A';
    
   for(int i=1; i<=row;i++){
    cout<<endl;
      
    for(int j=1; j<=i;j++){
        cout<<b;    
         
   }

   b++;
   }*/

//=======================================

/*int row;

cout<<"Enter row: ";
cin>>row;

char a = 'A';

int i = 1;

while(i<=row){
    cout<<endl;
    int j=1;

    while(j<=i){
        cout<< a;
        j++;
    }
    a++;
    i++;

}*/

int rowws=5;

int i = rowws;

while(i>=1)
{
    int j=1;
    while(j<=rowws - i)
    {
        cout<<" ";
        j++;
    }

    int k=1;
    while(k<=2 * i-1)
    {
        cout<<"*";
        k++;
    }
    cout<<endl;
    i--;
    
}
/*
for(int i=1; i<=5;i++)
{
    
    for(int j=1; j<=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}*/

 return 0;
}