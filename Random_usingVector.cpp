#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <numeric>

using namespace std;


int main(){

vector<int> v(10); //(syntax) vector<dataType> variable_name
random_device rd;
iota(v.begin(), v.end(), 1);
std::shuffle(v.begin(), v.end(),rd);

for( auto i : v)
{
   cout<< i <<endl;
}


    return 0;
}