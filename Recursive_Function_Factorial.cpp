#include <iostream>
using namespace std;

int recursive_fact(int m , int n){
    if(n==0)
    return 1;

   /* if(n<0){
   char a[50]  ="Invalid number";
    return a;
    }*/

    if(m==n)
    return m;



    return m * recursive_fact(m+1,n);
}

int main(){
    int m=1, n ;

    cout<<"Enter a number greater than zero(0): ";
    cin>>n;

    cout<< "\nfactorial is "<<recursive_fact(m,n);


    return 0;
}