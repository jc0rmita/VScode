#include <iostream>
using namespace std;
/*
int main(){


int num1, num2;
cout<<"enter num1: ";
cin >>num1;

cout<<"enter num2: ";
cin>>num2;

int *num1Ptr = &num1;
int *num2Ptr =  &num2;

int *temp = num1Ptr;
num1Ptr = num2Ptr;
num2Ptr =  temp;

cout<<*num1Ptr<<endl<<*num2Ptr;

    return 0;

}*/


//function
void swap(int &num1, int &num2){


int *num1Ptr = &num1;
int *num2Ptr = &num2;

    int *temp = num1Ptr;
    num1Ptr = num2Ptr;
    num2Ptr = temp;


    cout<<*num1Ptr<<endl;
    cout<<*num2Ptr<<endl;
}

int main(){


int num1, num2;
cout<<" enetr 1st number: ";
cin>>num1;

cout<<"enter 2nd number: ";
cin>> num2;

swap(num1, num2);

    return 0;
}