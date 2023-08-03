#include <iostream>
using namespace std;

int main(){

// total average in two years

float monthsArray[12]; //= {100,220,300,0,200,250};

float total;

for (int i=0; i<=11;i++){
    cout<<"Enter amount of month "<<i+1<<": ";
    cin>>monthsArray[i];
    total+=monthsArray[i];
}

for (int i=0; i<=11; i++){
    cout<<"Element "<<i+1<<": "<<monthsArray [i]<<endl;
}


//float total= monthsArray[0] + monthsArray[1] + monthsArray[2] + monthsArray[3] + monthsArray[4] + monthsArray[5] + monthsArray[6];

float average =  total/12;
float inTwoyears = average * 24;

cout<<"\ntotal "<<total<<endl;
cout<<"average "<<average<<endl;
cout<<"inTwoyears "<<inTwoyears<<endl;

    system("pause>0");
}