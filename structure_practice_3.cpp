//Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.
#include <iostream>
#include <string>
using namespace std;



struct student{
int roll_no;
string name;
int age;
string address;
int marks;



};


int main(){

struct student stud[15];

for (int i =0; i<15; i++)
{
    cout<<"\nStudent "<<i+1<<endl;
    stud[i].roll_no = i+1;
    cout<<"Enter name: ";
    cin>>stud[i].name;
    cout<<"Enter age: ";
    cin>>stud[i].age;
    cout<<"Enter address: ";
    cin>>stud[i].address;
    cout<<"Enter marks: ";
    cin>>stud[i].marks;
}


for(int i =0; i<15; i++)
{
       
        cout<<"\n\nStudent "<<i+1<<endl;
        cout<<"roll_no: "<<stud[i].roll_no<<endl;
        cout<<"name: "<<stud[i].name<<endl;
        cout<<"age: "<<stud[i].age<<endl;
        cout<<"address: "<<stud[i].address<<endl;
        cout<<"marks: "<<stud[i].marks<<endl;
    
}

 return 0;
}