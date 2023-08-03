#include <iostream>
#include <windows.h>
#include <dos.h>
using namespace std;

int main(){
    int x=5;
while (x>=1){

        int y =1;
        while (y<=x){
            cout<<y;
             y++;
        }
        cout<<endl;
        x--;

        Sleep(500);
        //Sound(500);
    }
 return 0;
}