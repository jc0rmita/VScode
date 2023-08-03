#include <iostream>
using namespace std;

int main(){

    int x=5;

    while (x>=1){

        int y=1;
        while (y<=x){
            cout<<"*";
             y++;
        }
        cout<<endl;
        x--;
    }

}