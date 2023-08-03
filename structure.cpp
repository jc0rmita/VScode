#include <iostream>
#include <string>
using namespace std;

struct Smartphone{
    string name;
    string color;
    int storage;
    int price;

} phone,phone2;


int main(){

//Smartphone phone;
phone.name =  "Iphone 12";
phone.color =  "black";
phone.storage =  128;
phone.price =  50000;

//Smartphone phone2;
phone2.name = "Samsung";
phone2.color = "blue";
phone2.storage = 64;
phone2.price = 20000;


cout<<"name: "<<phone.name<<"\n";
cout<<"color: "<<phone.color<<"\n";
cout<<"storage: "<<phone.storage<<"\n";
cout<<"price: "<<phone.price<<"\n"<<endl;

cout<<"name: "<<phone2.name<<"\n";
cout<<"color: "<<phone2.color<<"\n";
cout<<"storage: "<<phone2.storage<<"\n";
cout<<"price: "<<phone2.price<<endl;

    return 0;
}