#include <iostream>
#include <string>
using namespace std;


struct Smartphone{
    string name;
    string color;
    int storage;
    int price;

};

struct Person{
   string name ;
   int age;
   Smartphone phone;

};

void PrintphoneInfo(Smartphone phone){
cout<<"name: "<<phone.name<<"\n";
cout<<"color: "<<phone.color<<"\n";
cout<<"storage: "<<phone.storage<<"\n";
cout<<"price: "<<phone.price<<"\n"<<endl;
}

void PrintpersonInfo(Person p){
    cout<<"Name: "<<p.name<<"\n";
    cout<<"age: "<<p.age<<"\n";
    PrintphoneInfo(p.phone);
}

int main(){

Smartphone phone;
phone.name =  "Iphone 12";
phone.color =  "black";
phone.storage =  128;
phone.price =  50000;

Smartphone phone2;
phone2.name = "Samsung";
phone2.color = "blue";
phone2.storage = 64;
phone2.price = 20000;

/*
cout<<"name: "<<phone.name<<"\n";
cout<<"color: "<<phone.color<<"\n";
cout<<"storage: "<<phone.storage<<"\n";
cout<<"price: "<<phone.price<<"\n"<<endl;
*/

/*
cout<<"name: "<<phone2.name<<"\n";
cout<<"color: "<<phone2.color<<"\n";
cout<<"storage: "<<phone2.storage<<"\n";
cout<<"price: "<<phone2.price<<endl;
*/

PrintphoneInfo(phone);
PrintphoneInfo(phone2);

Person p;
p.name = "JC";
p.age = 20;
p.phone = phone2;

PrintpersonInfo(p);

    return 0;
}