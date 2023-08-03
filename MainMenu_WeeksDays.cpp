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

double pound(int steps[][7],int WEEKS)
{

double calories=0, pound =0;
const double steps_per_pound = 35000;
int totalSteps=0;


for(int i=0;i<WEEKS;i++){
    for(int j=0;j<7;j++){
        totalSteps +=steps[i][j];
    }
}

pound = totalSteps/steps_per_pound ;

return pound;



}

void sorted(int steps[][7], int WEEKS)
{
    int temp=0;

    for(int i=0; i<WEEKS; i++)
    {
        for(int j=0; j<7-1; j++)
        {
            for(int k=j+1; k<7; k++)
            {
                if(steps[i][j]>steps[i][k])
                {
                    temp = steps[i][j];
                    steps[i][j]=steps[i][k];
                    steps[i][k]=temp;
                }
            }
        }
    }

    cout<<"The sorted 2d array in ascending order is: "<<endl;
    for(int i=0; i<WEEKS; i++)
    {
        for(int j=0; j<7;j++)
        {
            cout<<steps[i][j]<<" ";
        }
        cout<<endl;
    }
}

void sequential_search(int steps[][7], int WEEKS, int wanted)
{


bool found =false;

int row_index=0;
int col_index=0;

   // cout<<"\nEnter the element you want to find: ";
    //cin>>wanted;   

for(int i=0; i<WEEKS; i++)
{
    for(int j=0; j<7; j++)
    {
        if(wanted==steps[i][j])
        {  found = true;
           row_index = i;
           col_index = j;
            break;
        }
        
    }
   if(found)
        {
         cout<<"\nThe element "<<wanted<<" is located at week "<<row_index+1<<" day "<<col_index+1<<endl;
         break;          
        }
}


  if(!found)
        {
        cout<<"\nNOT FOUND!"<<endl;
        }

    getch();
}


const int MAX_ROWS = 100;
const int MAX_COLS = 100;

bool binarySearch2D(int steps[][7],int WEEKS, int target, int& row, int& col) {
    int left = 0, right = WEEKS * 7 - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
         row = mid / 7;
         col = mid % 7;
        if (steps[row][col] == target)
            return true;
        else if (steps[row][col] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
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
    cout<<"6 - Sorted in ascending order\n";
    cout<<"7 - Searching element using Sequential Search\n";
    cout<<"8 - Searching element using Binary Search\n";
    cout<<"9 - Exit\n";
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
         cout<<"The total pound loss is: "<<pound(steps,WEEKS);
         getch();
         break;
        }

        case 6:
        {
            system("cls");
            sorted(steps,WEEKS);
            getch();
            break;
        }

        case 7:
        {
         system("cls");
         int wanted;
         cout<<"\nEnter the element you want to find: ";
         cin>>wanted;  
         sequential_search(steps,WEEKS,wanted);
         break;
        }

        case 8:
        {
        system("cls");
        int target, row, col;
        
      
   
        cout << "Enter the number to search for: ";
        cin >> target;
        bool found = binarySearch2D(steps, WEEKS, target, row, col);
        if (found)
            cout << "\nThe element "<<target<<" is located at week "<<row+1<<" day "<<col+1<<endl;
        else
            cout << "Element not found in array";
        getch();
        break;
        }

        case 9:
        {
            system("cls");
            exit(0);
            getch();
            break;
        }
    }

}while(choice);
    return 0;
}

/*
 
*/