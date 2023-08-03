#include <iostream>
#include <fstream>
using namespace std;

int main(){
   
   fstream myFile;
   
   myFile.open("Ormita.txt",ios::out);//write
   if(myFile.is_open())
   {
     myFile << "Hello World\n";
     myFile << "I'm Jc!\n";
     myFile.close();
   }

    //overwrite the first file
    /*myFile.open("Ormita.txt",ios::out);//write
   if(myFile.is_open())
   {
     myFile << "Hello 2\n";
     myFile.close();
   }*/
     

     //both lalabas... 
    myFile.open("Ormita.txt",ios::app);//append
   if(myFile.is_open())
   {
     myFile << "Hello 2\n";
     myFile.close();
   }

    return 0;
}