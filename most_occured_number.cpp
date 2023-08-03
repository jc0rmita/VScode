#include <iostream>
using namespace std;

int occurs(int ar[], int size){
int max_count = 0;
   int most_occured = 0;

   for(int i=0; i<size; i++)
   {
    int count =1;

    for(int j=i+1; j<size; j++)
    {
        if( ar[i]==ar[j])
        {
            count++;           
        }
    }
    if(count>max_count)
    {
        max_count = count;
        most_occured = ar[i]; 
        
    }
     
   }

   //cout<<"The most occured number is: "<<most_occured<<endl;
  // cout<<"It occurs "<< max_count << " times";

  return most_occured;
}

int main(){

  int size;

  cout<<"Enter how many elements: ";
  cin>>size;

int ar[100];

  cout<<"Enter the elements"<<endl;
  for(int i=0; i<size;i++)
  {
    
    cin>>ar[i];
  }
   
   cout<<"The most occured number is: " <<occurs(ar,size);

   


    return 0;

}