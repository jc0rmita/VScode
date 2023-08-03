#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>
using namespace std;
#define gecilie cout



void gotoxy(short x,short y)

{
   COORD pos = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


int gcd(int num1, int num2){
int gcd;

for( int i=1; i<=num1 && i<=num2;i++)
{
    if(num1%i==0 && num2%i==0)
    {
        gcd =i;
    }
}
//cout<< "The greatest common dvisor is: "<<gcd<<endl;
return gcd;
}


int lcm(int num1, int num2){
int i, j, hcf = 1, lcm;
    
    j = (num1 < num2) 
     num1 : num2;
    for (i = 1; i <= j; i++) {

        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    
    lcm = (num1 * num2) / hcf;
   
  return lcm;

}



void quo_rem(int *n1, int *n2){
   int quo, rem;

    quo = *n1/ *n2;
    rem = *n1 % *n2;

    gecilie<<"The quotient is: "<<quo<<" and the remainder is: "<<rem<<endl;
}


void avrg(){

    struct exam{
        int prelim;
        int midterm;
        int finals;
        int average;
    } p1;

    int prelim,mid,finals,avr;

    gecilie<<"Enter prelim: ";
    cin>>prelim;

    gecilie<<"enter midterm: ";
    cin>>mid;

    gecilie<<"enter finals: ";
    cin>>finals;

    p1.prelim = prelim;
    p1.midterm = mid;
    p1.finals = finals;

    p1.average = (p1.prelim+p1.midterm+p1.finals)/3;

    gecilie<< "\nprelim = "<<p1.prelim<<endl;
    gecilie<< "midterm = "<<p1.midterm<<endl;
    gecilie<< "finals = "<<p1.finals<<endl;

    gecilie<< "\naverage = "<<p1.average<<endl;
}


void struct_array(){

    struct exam{
        int prelim;
        int midterm;
        int finals;
        int average;
    } stud_grade[3];

        for (int i=0; i<3;i++)
           {
            gecilie<<"Enter prelim: ";
            cin>>stud_grade[i].prelim;
 
            gecilie<<"enter midterm: ";
            cin>>stud_grade[i].midterm;

            gecilie<<"enter finals: ";
            cin>>stud_grade[i].finals;

            gecilie<<endl;
  
           }
    
        for(int i=0;i<3;i++)
          {

          stud_grade[i].average = (stud_grade[i].prelim+stud_grade[i].midterm+stud_grade[i].finals)/3;

          gecilie<< "\nprelim = "<<stud_grade[i].prelim<<endl;
          gecilie<< "midterm = "<<stud_grade[i].midterm<<endl;
          gecilie<< "finals = "<<stud_grade[i].finals<<endl;
          gecilie<< "average = "<<stud_grade[i].average<<endl;
          }

   
}
int main(){

int choice;
do{

system("cls");

gecilie<<"Menu\n";
gecilie<<"1 - GCD and LCM\n";
gecilie<<"2 -  quotient and remainder \n";
gecilie<<"3 -  average\n";
gecilie<<"4 - structure array\n";
gecilie<<"5 - exit\n";


gecilie<<"Enter your choice: ";
cin>>choice;

switch(choice){

 case 1:   
 system("cls");
int num1, num2;

gecilie<<"Enter num 1: ";
cin>>num1;

gecilie<<"Enter num 2: ";
cin>>num2;


gecilie<< "\nThe greatest common dvisor is: "<<gcd(num1,num2)<<endl;
gecilie<< "\nThe least common multiple is: "<<lcm(num1,num2)<<endl;
getch();
break;

case 2:
system("cls");

int n1, n2;

gecilie<<"Enter num 1: ";
cin>>n1;

gecilie<<"Enter num 2: ";
cin>>n2;

quo_rem(&n1, &n2);

getch();
break;

case 3:
system("cls");
avrg();
getch();
break;

case 4:
system("cls");
struct_array();
getch();
break;



case 5:
system("cls");
exit(0);
getch();
break;
}
}while(choice);

    return 0;
}
//gecilie