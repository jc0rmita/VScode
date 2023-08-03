#include <iostream>
using namespace std;
/*
int main(){

int a[]={5,0,2,3,4,1,6,8,7,9};
    
int length = 10;

for(int i=1; i<length;i++)
{
    int key = a[i];
    int j = i-1;

    while( j>=0 && a[j]>key )
    {
      a[j+1] = a[j];
      j=j-1;   

    }
    a[j+1]=key;
}

for(int i=0; i<length; i++)
{
    cout<<"a["<<i<<"] = "<< a[i]<<endl;
}

    return 0;
}
*/



void insertion_sort(int a[], int length)
{

for(int i=1; i<length;i++)
{
    int key = a[i];
    int j = i-1;

    while( j>=0 && a[j]>key )
    {
      a[j+1] = a[j];
      j=j-1;   

    }
    a[j+1]=key;
}

}

int main(){

int a[]={5,0,2,3,4,1,6,8,7,9};
    
int length = 10;

insertion_sort(a,length);

for(int i=0; i<length; i++)
{
    cout<<"a["<<i<<"] = "<< a[i]<<endl;
}

    return 0;
}





