#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

class car{
    public:

    string brand;
    string model;
    int year;

};

class student{
    public:
      
      string name;
      string course;
      int section;
      int year;
};

int main(){

    car details1;
        details1.brand = "BMW";
        details1.model = "x5";
        details1.year = 1999;


    car details2;
         details2.brand = "mustang";
         details2.model = "xyz";
         details2.year = 1969;

    student student1;
          student1.name = "Jhon Carl Ormita";
          student1.course = "BSIT";
          student1.section = 1;
          student1.year = 1; 
  
  cout<<details1.brand<<" "<<details1.model<<" "<<details1.year<<endl;
  cout<<details2.brand<<" "<<details2.model<<" "<<details2.year<<endl;
  cout<<student1.name<<" "<<student1.course<<" "<<student1.section <<" "<<student1.year<<" "<<endl;
getch();
return 0;

}