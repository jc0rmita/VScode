#include <iostream>
using namespace std;

struct location_A{

    int num1;
    int num2;
}a;


union loactionB{

    int num1;
    int num2;
}b;

int main(){
   

   cout<<"STRUCTURE"<<endl;//magkaiba ng location
   a.num1 = 20;
   a.num2 = 25;

   cout<<a.num1<<endl;
   cout<<&a.num1<<endl;

   cout<<a.num2<<endl;
   cout<<&a.num2<<endl;

   

   cout<<"\nUNION"<<endl; // same ng location
   b.num1 = 30;
   b.num2 = 35;
   
   cout<<b.num1<<endl;
   cout<<&b.num1<<endl;

   cout<<b.num2<<endl;
   cout<<&b.num2<<endl;
 
    return 0;
}