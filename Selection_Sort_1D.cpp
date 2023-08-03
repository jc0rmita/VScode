#include <iostream>
using namespace std;

/*int main(){

int a[]={5,2,4,1,3,8,7,9,0,6};

int length = 10;

for(int i=0; i<(length-1);i++)
{
    int min_pos = i;

    for(int j=i+1; j<length; j++)
    {
        if(a[j] < a[min_pos])
        {
            min_pos=j;
        }

     }
      if(min_pos != i)
        {
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        }
}

for(int i=0; i<length; i++)
{
    cout<<"a["<<i<<"] = "<<a[i]<<endl;
}
    return 0;
}
*/

void selection_sort(int a[], int length);

int main(){

  int a[]={5,1,3,2,6,4,8,9,7,0};
  int length = 10;

  selection_sort(a, length);//function calling

  for(int i=0;i<length;i++)
  {
    cout<<"a["<<i<<"] = " <<a[i]<<endl;
  }
  
 
    return 0;
}

void selection_sort(int a[], int length){

    

  for(int i=0; i<(length-1); i++)
  {
    int min_pos = i;
    for(int j = i+1; j<length; j++ )
    {
        if(a[j] < a[min_pos])
        {
            min_pos = j;
        }

    }
    if(min_pos != i)
    {
        int temp = a[i];
        a[i]= a[min_pos];
       a[min_pos] = temp;
    }
  }

}
