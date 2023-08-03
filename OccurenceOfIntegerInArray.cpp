#include <iostream>
using namespace std;

int main(){
    int arr[100][100], no, rows, column, count=0;

   cout<<"Enter row size: ";
   cin>>rows;

   cout<<"Enter column size: ";
   cin>>column;

   for (int i=0; i<rows;i++) {
   
    cout<<"Row"<<i+1<<": \n";
    

    for(int j=0;j<column;j++){
     
     cout<<"Enter a number row "<<i+1<<" column "<<j+1<<": ";

     cin>>arr[i][j];
   }
   }
   cout<<"\n\nEnter a number: ";
   cin>>no;


   for (int i=0; i<rows; i++){
    for(int j=0;j<2;j++){
    if(arr[i][j]==no){
        count +=1;
        
    }
   }
   }
    if (count>0){
        cout<<"\nThe occurrences of "<<no<<" in the array are: "<<count;
    }
    else{
        cout<<"\nThere is no occurences of "<< no<< " in the array";
    }


    return 0; 
}