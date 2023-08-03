//Write a program to store and print the roll no., name , age and marks of a student using structures.
#include <iostream>
#include <string>

using namespace std;

struct student{
  int roll_no;
  string name;
  int age;
  int marks;
};

int main(){
   
   student p;
   p.roll_no = 1;
   p.name = "pedro";
   p.age =  19;
   p.marks = 99;
   
   cout<<"roll_no: "<<p.roll_no<<endl;
   cout<<"name: "<<p.name<<endl;
   cout<<"age: "<<p.age<<endl;
   cout<<"marks: "<<p.marks<<endl;

    return 0;
}