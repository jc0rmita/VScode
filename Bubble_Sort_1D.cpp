#include <iostream>
using namespace std;

void bubble_sort(int a[], int length);

int main(){
    
    int a[]={5,6,2,3,1,0,8,9,4,7};

    int length = 10;
    
       
    bubble_sort(a,length);// function calling
   

    for(int i=0; i<length; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}


void bubble_sort(int a[], int length)
{

    bool swapped;
    int i=0;
 do{
      
      swapped= false;
       
       for(int i=0;i<length;i++)
        {
          for(int j=0; j<length-1-i;j++)
            {
               if(a[j] > a[j+1])
                {
                   int temp = a[j];
                   a[j] = a[j+1];
                   a[j+1] = temp; 
                   swapped = true; 
                }
            } 
        }
       i++;
    }while(swapped);
}