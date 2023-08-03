#include <iostream>
#include <conio.h>
using namespace std;

int main(){
   
   int steps;
   double calories, pound;
   

   cout<<"Enter steps: ";
   cin>>steps;
   
   

   pound = steps/35000;

   cout<<"The pound you lost is "<<pound<<" pounds of weight loss\n"; 
    
    getch();
    return 0;
}