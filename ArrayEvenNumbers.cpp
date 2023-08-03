#include <iostream>
#include <cmath>
using namespace std;

//Array even numbers
/*int main(){

    int num[10];

for (int i=0; i<10;i++){
    cout<<"Enter a number "<<i+1<<": ";
    cin>>num[i];
    
    }


for (int i=0; i<10; i++){
   
    if (num[i] % 2 == 0){
       cout<<"Even number is: "<<num[i]<<endl;
       }
    }
 

 
  return 0;
}*/


int main(){

    cout<<"\nDisplay the odd and even number\n";
    cout<<"Display how many even and odd numbers\n";
    cout<<"Display the total of even and total of odd numbers\n\n";
   
   int num[10], even=0, odd=0, eve=0, od=0, totalE=0, totalO=0;
   int totaleve, totalodd;

   for (int i=0; i<10; i++){
    cout<<"Enter a number"<<i+1<<": ";
    cin>>num[i];
   }

   cout<<"\nThe Even numbers is: ";
   for (int i=0; i<10; i++){
    if (num[i]%2==0){
       even=num[i];
       cout<<num[i]<<", ";
    }

   }
     
     cout<<"\nThe odd number is: ";
     for (int i=0; i<10;i++){
      if(num[i]%2==1){
        odd=num[i];
        cout<<odd<<", ";
        }
     }
    
   
    
    
   for(int i=0; i<10; i++){
    if (num[i]%2==0){
        eve = eve+1;
    }

    else if (num[i]%2==1){
        od = od+1;
    }
   }
    
    cout<<"\n\nThere are "<<eve<<" even numbers";
    cout<<"\nTher are "<<od<<" odd numbers";


    for (int i=0; i<10; i++){
        if(num[i]%2==0){
          totalE = totalE + num[i];
        }

         else if(num[i]%2==1){
            totalO= totalO+num[i];
        }
    }

    //for (int i=0; i<10; i++){    
        
    //}

    cout<<"\n\nThe sum of all even numbers is: "<<totalE;
    cout<<"\nThe sum of all odd numbers is: "<<totalO;


    return 0;
}