#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
 
    string food = "Apple";// stores value of food variable
    string &m = food;// reference to food
     
     cout<<food<<endl;//outputs apple
     cout<<m;//outputs apple

    
    getch();
    return 0;
}