#include <iostream>
#include <cmath>
using namespace std;


void diagonal(int a[][100], int rows, int cols){

int Pdiagonal=0, Sdiagonal=0;




 for(int i=0;i<rows;i++)
    {
      cout<<endl;
      for(int j=0;j<cols;j++)
      {
        cout<<a[i][j]<<" ";
      }
    }



for (int i=0; i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        if(i==j)
        {
            Pdiagonal += a[i][j];

        }
        if( i == 4-j-1)
        {
            Sdiagonal += a[i][j];
        }
    }
}



cout<<"\nThe sum for Principal diagonal is: "<<Pdiagonal;
cout<<"\nThe sum for Secondary diagonal is: "<<Sdiagonal;


}

int main(){
int a[100][100],rows,cols;

    cout<<"Enter rows: ";
    cin>>rows;

   cout<<"Enter cols: ";
   cin>>cols;



    cout<<"Enter element:"<<endl;
     for(int i=0; i<rows;i++)
    {
    for(int j=0; j<cols;j++)
       {
        cin>>a[i][j];
       }
    }

    diagonal(a,rows,cols);

    return 0;
}