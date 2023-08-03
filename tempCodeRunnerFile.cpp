#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void gotoxy(short x,short y)

{
   COORD pos = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void settingArray(int steps[][7], int WEEKS){
  
       const int DAYS=7;
        
        
         for(int i=0;i<WEEKS;i++){
            for(int j=0;j<DAYS;j++){
              cout<<"Enter your steps for week "<<i+1<<" day "<<j+1<<": ";
              cin>>steps[i][j];
               }
            }

}

int totalsteps(int steps[][7], int WEEKS){

    const int DAYS =7;
     int totalSteps=0;


     for(int i=0;i<WEEKS;i++){
        for(int j=0;j<DAYS;j++){
         totalSteps +=steps[i][j];
       }
     }
       
       return totalSteps;
       getch();
       //cout<<"\nYour total steps for two weeks was: "<<totalSteps<<endl;
       
}

int totalEvenSteps(int steps[][7], int WEEKS){
    
    const int DAYS=7;
    int totalEvenSteps=0;

for(int i=0;i<WEEKS;i++){
    for(int j=0;j<DAYS;j++){
        if(steps[i][j]%2==0){
        totalEvenSteps +=steps[i][j];
        }
    }
}

return totalEvenSteps;
getch();

//cout<<"\nYour total even numbers steps for two weeks was: "<<totalEvenSteps<<endl;
}

void display(int steps[][7], int WEEKS){

const int DAYS=7;
        
         for(int i=0;i<WEEKS;i++){
            for(int j=0;j<DAYS;j++){
              cout<<"Week "<<i+1<<" day "<<j+1<<": ";
              cout<<steps[i][j]<<"\n";
               }
            }
       
}

double pound(int steps, double pound){
double calories;

calories = steps * 0.05;
pound = calories / 3500;

return pound;
//cout<<"total pound loss is:"<< pound;

}


int main(){

int WEEKS;
const int DAYS=7;
int steps[100][DAYS];
int choice;
do{
    system("cls");

    cout<<"Main Menu\n";
    cout<<"1 - Setting array\n";
    cout<<"2 - Total Steps\n";
    cout<<"3 - Total Even Steps\n";
    cout<<"4 - Display\n";
    cout<<"5 - Convert steps to pounds\n";
    cout<<"6 - Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){

        case 1:
        {
        system("cls");
       
       do{

         cout<<"\nHow many weeks do you want? ";
         cin>>WEEKS;

        if (WEEKS>100 || WEEKS<=0)
        cout<<"\n[Invalid input please try again]"<<endl;
        cout<<"\n------------------------------------------------"<<endl;

        } while (WEEKS>100 || WEEKS<=0);
    
         settingArray(steps, WEEKS);


        getch();
        break;
    }
        
        case 2:
        {
            
        system("cls");
         

         cout<<"The total steps is: "<<totalsteps(steps,WEEKS);
         getch();
        
        break;
        }
        


        case 3:
        {
        system("cls");
        cout<<"The total even number steps is: "<<totalEvenSteps(steps,WEEKS);
        getch();
        break;
        }

        case 4:
        {
        system("cls");
        display(steps,WEEKS);
        getch();
        break;
        }
        
        case 5:
        {
         system("cls");
        
        cout<<"The total pound loss is: "<<pound(steps,pound);
       // pound(steps,pound);
         getch();
         break;
        }
    }

}while(choice);
    return 0;
}