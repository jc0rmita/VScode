//Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.
#include <iostream>
#include <string>
using namespace std;



struct student{
int roll_no;
string name;
int age;



};


int main(){

struct student stud[5];

for (int i =0; i<5; i++)
{
    cout<<"Student "<<i+1<<endl;
    stud[i].roll_no = i+1;
    cout<<"Enter name: ";
    cin>>stud[i].name;
    cout<<"Enter age: ";
    cin>>stud[i].age;
}


for(int i =0; i<5; i++)
{
    if (stud[i].roll_no == 2)
    {   
        cout<<"\n\nStudent "<<i+1<<endl;
        cout<<"roll_no: "<<stud[i].roll_no<<endl;
        cout<<"name: "<<stud[i].name<<endl;
        cout<<"age: "<<stud[i].age<<endl;
    }
}

 return 0;
}