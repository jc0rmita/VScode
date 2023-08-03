#include <iostream>
using namespace std;

int main(){

    for (int x=2;x<=5;x++){

       for (int y=2; y<=x; y++){

         cout<<"*";

       }

    cout<<endl;
        }
cout<<"=========================\n";

 for (int x=5;x>=1;x--){

       for (int y=1; y<=x; y++){

         cout<<"*";

       }

    cout<<endl;
        }

cout<<"=========================\n";

 for (int x=5;x>=1;x--){

       for (int y=1; y<=x; y++){

         cout<<y;

       }

    cout<<endl;
        }

cout<<"=========================\n";

 for (int x=1;x<=5;x++){

       for (int y=1; y<=x; y++){

         cout<<y;

       }

    cout<<endl;
        }




    return 0;
}
