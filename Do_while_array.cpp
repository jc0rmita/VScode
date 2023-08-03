#include <iostream>
using namespace std;

void num(int arr[4][4])
{
   int i=0;
do{
    cout<<endl;
    int j=0;
   do{
      cout<<arr[i][j]<<" ";
      j++;
          
   }while(j<4);   
   
   i++;
}while(i<4);

}

int main(){


int arr[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4} };

num(arr);


    return 0;

}