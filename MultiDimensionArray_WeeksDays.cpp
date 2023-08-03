


#include <iostream>
using namespace std;

int main(){
  
   int WEEKS;
   const int DAYS=7;
   int steps[100][DAYS];

do{

   cout<<"\nHow many weeks do you want? ";
   cin>>WEEKS;

    
   if (WEEKS>100 || WEEKS<=0)
    cout<<"\n[Invalid input please try again]"<<endl;
    cout<<"\n------------------------------------------------"<<endl;

  } while (WEEKS>100 || WEEKS<=0);

  
   
  

   for(int i=0;i<WEEKS;i++){
    for(int j=0;j<DAYS;j++){
        cout<<"Enter your steps for week "<<i+1<<" day "<<j+1<<": ";
        cin>>steps[i][j];
    }
   }

  int totalSteps=0, totalEvenSteps=0;

for(int i=0;i<WEEKS;i++){
    for(int j=0;j<DAYS;j++){
        totalSteps +=steps[i][j];
    }
}

for(int i=0;i<WEEKS;i++){
    for(int j=0;j<DAYS;j++){
        if(steps[i][j]%2==0){
        totalEvenSteps +=steps[i][j];
        }
    }
}

cout<<"\nYour total steps for two weeks was: "<<totalSteps<<endl;
cout<<"Your total even numbers steps for two weeks was: "<<totalEvenSteps<<endl;

    return 0;
}