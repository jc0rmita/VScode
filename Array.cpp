#include <iostream>
using namespace std;

int main(){

float monthsArray[6] =  {100,220,300,0,200,250};

float total= monthsArray[0] + monthsArray[1] + monthsArray[2] + monthsArray[3] + monthsArray[4] + monthsArray[5] + monthsArray[6];

float average =  total/6;
float inTwoyears = average * 24;

cout<<"total "<<total<<endl;
cout<<"average "<<average<<endl;
cout<<"inTwoyears "<<inTwoyears<<endl;

    system("pause>0");
}