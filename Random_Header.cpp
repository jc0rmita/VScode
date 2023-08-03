#include <iostream>
#include <random>
using namespace std;


int main(){

random_device rd;
uniform_int_distribution<int> dist(1,9);
//uniform_int_distribution template is used for generating random integers within a range,

cout<< dist(rd)<<endl;
    return 0;
}