#include <iostream>
#include <conio.h>
using namespace std;

int main(){

int rows, cols, wanted;
bool found =false;


cout<<"\nEnter rows: ";
cin>>rows;

cout<<"Enter column: ";
cin>>cols;

int arr[rows][cols];

for(int i=0; i<rows;i++)
{
    cout<<"\nRow: "<<i+1<<endl;
    for(int j=0; j<cols; j++)
    {
        cout<<"Enter element in row "<<i+1<<" column "<<j+1<<": ";
        cin>>arr[i][j];
    }
}

cout<<"\nEnter the element you want to find: ";
cin>>wanted;

 
int row_index=0;
int col_index=0;
//int rows_length = sizeof(arr)/sizeof(arr[rows]); //this method will get the total rows
//int cols_length = sizeof(arr)/sizeof(arr[rows][cols]);//this method will get the total column in every rows

for(int i=0; i<rows; i++)
{
    for(int j=0; j<cols; j++)
    {
        if(wanted==arr[i][j])
        {  found = true;
           row_index = i;
           col_index = j;
            break;
        }
        
    }
   if(found)
        {
         cout<<"\nThe number "<<wanted<<" is located at row "<<row_index+1<<" column "<<col_index+1<<endl;
         break;          
        }
}


  if(!found)
        {
        cout<<"\nNOT FOUND!"<<endl;
        }

    getch();
    return 0;
} 

