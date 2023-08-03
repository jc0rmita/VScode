#include <iostream>
using namespace std;

void pyramid(void){

    int rowws;
    cout<<"enter rows: ";
    cin>>rowws;

int i = 1;

while(i<=rowws)
{
    int j=1;
    while(j<=rowws-i)
    {
        cout<<" ";
        j++;
    }

    int k=1;
    while(k<= 2*i-1)
    {
        cout<<"*";
        k++;
    }
    cout<<endl;
    i++;
    
}
}

int main(){

    pyramid();

    return 0;
}