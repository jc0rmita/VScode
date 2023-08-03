#include <iostream>
using namespace std;

int divide(int arr[], int start, int end){

    int pivot =arr[end];
    int index = start;

    for(int i=start; i<end; i++)
    {
      if(arr[i]<pivot)
      {
        int temp = arr[i]; //51234
        arr[i]=arr[index];
        arr[index]=temp;
        index++;
      }

    }

    int temp = arr[end];
    arr[end]= arr[index];
    arr[index]= temp; 

    return index;
}

void Quick(int arr[], int start, int end){

    if(start<end)
    {
     
      int d = divide(arr, start, end);
      Quick(arr, start, (d-1));
      Quick(arr, (d+1), end);
 
    }
}

int main(){

int num;
int i;
int arr[10];    

cout<<"Enter number of elements: ";
cin>>num;

cout<<"Enter the elements: "<<endl;
for(int i=0;i<num;i++)
{
    cin>>arr[i];
}  

Quick(arr, 0, (num-1));

cout<<"After sorting the elements are: ";
for(int i=0; i<num;i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}