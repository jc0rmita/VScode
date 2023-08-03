#include <iostream> 
#include <numeric> // std::iota
using namespace std;

int main(){

int numbers[10];

int st = 100; // initialize starting value as 100

std::iota(numbers, numbers +10, st);
//Assigns to every element in the range [first, last] successive values of val, as if incremented with ++val after each element is written.
//void iota (ForwardIterator first, ForwardIterator last, T val);

cout<<"The elements are : "<<endl;

for (auto i : numbers){
    cout<<i<<" "<<endl;
}


    return 0;
}