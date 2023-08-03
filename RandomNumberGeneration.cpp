#include <iostream>
#include <cstdlib>//standard library// use for srand() 
#include <ctime>// header for time
using namespace std;

int main(){

srand(time(0)); // srand() - is to have seed in rand()// time(0)- because since time is changing evertime we can have different seed
cout<< (rand() % 5) + 1<<endl;// rand()-  to display random number // the %5 is use to display number between 0 to 5.// the +1 is use to not include 0 in display so it will be between 1 to 5.  

cout<<time(0);
    return 0;
}