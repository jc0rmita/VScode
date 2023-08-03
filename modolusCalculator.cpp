#include <iostream>
using namespace std;

int main(){
    int num1, num2, mod, quo;
    cout<<"enter 1st number: ";
    cin>>num1;

    cout<<"enter 2nd number: ";
    cin>>num2;
    
    quo = num1/num2;
    mod = num1%num2;
    
    cout<<"the quotien is: "<<quo<<endl;
    cout<<"the modulo is: "<<mod<<endl;
    
    return 0;

}