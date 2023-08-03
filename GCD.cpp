#include <iostream>
using namespace std;

int gcd(int num1, int num2){
int gcd;

for( int i=1; i<=num1 && i<=num2;i++)
{
    if(num1%i==0 && num2%i==0)
    {
        gcd =i;
    }
}
//cout<< "The greatest common dvisor is: "<<gcd<<endl;
return gcd;
}

int main(){

int num1, num2;

cout<<"Enter num 1: ";
cin>>num1;

cout<<"Enter num 2: ";
cin>>num2;


cout<< "\nThe greatest common dvisor is: "<<gcd(num1,num2)<<endl;

    return 0;
}