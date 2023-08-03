#include <iostream>
using namespace std;

//syntax = using new_name = existing_type; 
int main(){

using c = char;
using s = string;
using n = int;


s name = "jc";
n age = 20;
c letter = 'J';

cout<<name<<endl;
cout<<age<<endl;
cout<<letter<<endl;


return 0;
}