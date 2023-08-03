#include <iostream>
using namespace std;

int main(){

int range, prod;

cout<<"Enter the range for multiplictaion table: ";
cin>>range;

for(int i=1;i<=range;i++)
{
    cout<<i<<" | ";
    for(int j=1;j<=range;j++)
    {
        prod = i * j;
        cout<<prod<<" ";
    }
    cout<<endl;
}


    return 0;

}