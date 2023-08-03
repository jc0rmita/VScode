#include <iostream>
using namespace std;

int main(){

int n;

cout<<"Enter how many elements: ";
cin>>n;

int arr[n];

cout<<"Enter "<<n<<" number: \n";

for(int i=0; i<n;i++)
{
    cin>>arr[i];
}

cout<<"The inputted value is: "<<endl;

for(int i=0; i<n;i++)
{
    cout<<arr[i]<<" ";
}

for (int i=0; i<n;i++)
{
    for(int j=0;j<n-i-1;j++)
    {

        if(arr[j]>arr[j+1])
        {
         int temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=temp;
        }
    }
}

cout<<"\nSorted Array Elements:"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}


    return 0;
    
}