#include <iostream>
#include <cstring>
using namespace std;

//note: mahirap paganahin ang string sa  union
union Person {
    //char name[50];
    int age;
    int height;
};

int main() {
    Person p1;
   /* strncpy(p1.name,"jc", sizeof(p1.name) - 1);
    p1.name[sizeof(p1.name) - 1] = '\0';  // Ensure null-termination of the string
    cout << p1.name << "\n";*/

    p1.age = 20;
    cout << p1.age << "\n";
   


    p1.height = 6;
    cout << p1.height << "\n";



    return 0;
}
