#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstring>
using namespace std;

void gotoxy (short x, short y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void horizontal(void){

    int j= 20;
}

int main(){

  string mech = "In this mechanics-based game, you will have the opportunity to choose your desired difficulty level (Easy, Medium, Hard) and put your syntax skills to the test. Your task is to identify whether the provided syntax is correct or incorrect, and if incorrect, you must input the right syntax within a limited number of attempts.";  



for(int i =10; i<14; i++)
{
    int j= 20;
   
gotoxy(j,i);
{
for(int k = 0; mech[k] != '\0'; k++){
           cout << mech[k];
           {
           
           
           horizontal();
           }
         if(mech[k] == ' '){
           Sleep(200);
          } 
       }

}



    
}










//cout<< "In this mechanics-based game, you will have the opportunity to choose your desired difficulty level (Easy, Medium, Hard) and put your syntax skills to the test. Your task is to identify whether the provided syntax is correct or incorrect, and if incorrect, you must input the right syntax within a limited number of attempts.";

    getch();
    return 0;
}