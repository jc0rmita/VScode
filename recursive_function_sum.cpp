#include <iostream>
using namespace std;


int recursive_sum(int m, int n){
    if (m==n)
    return m;

    return m + recursive_sum(m+1, n);
}

int main(){

     int m, n;

     cout<<"Enter first number: ";
     cin>>m;

     cout<<"Enter second number: ";
     cin>>n;

     cout<< "Sum = " << recursive_sum(m,n);
}

/*
int recursive_fact(int num){
    if(num==0)
    return 1;

    return num * recursive_fact(num-1); 
}

int main(){
int num;
cout<<"enter num: ";
cin>>num;

//int fact = 1;

//for(int i=1; i<=num;i++){
  //  fact = fact * i;
//}
cout<<recursive_fact(num    );
    return 0;
}*/