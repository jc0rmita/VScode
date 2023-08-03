#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main(){

  //Memory address

   string food = " apple"; // stores value of food variable
   
   cout<<food<<endl;//outputs value of food (apple)
   cout<< &food<<endl; //outputs the memory address of food variable


//=================================================================================================
   //Pointer
   //A pointer however, is a variable that stores the memory address as its value.
   
  string* ptr = &food; // stores the memory address of food inside the variable named ptr

  cout<<ptr<<endl;// outputs the memory address of food
  cout<<*ptr<<endl;// outputs the value stored in the address which is "apple" 


    getch();
    return 0;
}