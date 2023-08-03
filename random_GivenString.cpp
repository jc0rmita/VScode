#include <iostream>
#include <vector>         
#include <random>  
#include <algorithm>        
#include <cstring>                                                                                
using namespace std;


int main(){

vector<string> elements = {
       "jc",
       "gomelan",
       "shelou",
       "janella"

};

vector<string> mali ={
   "kc",
    "jomelan",
    "camella",
    "chilu"
};

random_device rd;
mt19937 g(rd());
std::shuffle (mali.begin(), mali.end(),g);

int total_elements = mali.size();
string ans;
for(int i = 0; i<total_elements;i++){
   
    cout<<mali[i]<<endl;
    
    cout<<"Enter the right name"<<endl;
    cin>>ans;

bool found = false;

//will check if the user input is match to correct answer
for (const string &elements : elements)
{
    if( elements ==  ans){
        found = true;
        break;
    }
}


    if(found){
        cout<<"wow!\n"<<endl;
    }
    else
    cout<<"ngek!\n"<<endl;

}

    return 0;
}