#include <iostream>
#include <windows.h>
#ifndef MYLIBRARY_H_
#define MYLIBRARY_H_
using namespace std;
namespace mylib{

void gotoxy(short x,short y)

{
   COORD pos = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void box(int x1, int x2, int y1, int y2){
    for(y1=x1; y1<=y2; y1++){
        gotoxy(y1,x1); cout<<"*";
        gotoxy(y1,x2);cout<<"*";
        
    }
    for(y1=x1; x1<=x2; x1++){
        gotoxy(y1,x1);cout<<"*";
        gotoxy(y2,x1);cout<<"*";
    }
}

//==========

/*---------------------------------------------------------------------------------------------------------------------------------------
Sequence Menu Functions
-----------------------------------------------------------------------------------------------------------------------------------------
*/

void avrg(void)
{
   system("cls");
    float num1, num2, num3, num4, total, average;


    cout<<"Problem 1:\n"<<"\nCOMPUTE THE TOTAL AVERAGE OF FOUR NUMBERS";
    cout<<"\n------------------------------------------\n";
    cout<<"\nInput 1st two numbers (separated by space): ";
    cin>>num1>>num2;
    cout<<"\nInput last two numbers (separated by space): ";
    cin>>num3>>num4;

    total = num1+num2+num3+num4;
    average = total/4;

    cout<<"\nThe total of four numbers is: "<<total<<endl;
    cout<<"The average of four number is: "<<average<<endl;

  
}

void avrg2(int a1, int b1, int c1, int d1)
{
   

    cout<<"\n------------------------------------------\n";
    float num1, num2, num3, num4, total, average;


    cout<<"Problem 1:\n"<<"\nCOMPUTE THE TOTAL AVERAGE OF FOUR NUMBERS";
    cout<<"\n------------------------------------------\n";
    /*"cout<<"\nInput 1st two numbers (separated by space): ";
    cin>>num1>>num2;
    cout<<"\nInput last two numbers (separated by space): ";
    cin>>num3>>num4;*/


    total = a1+b1+c1+d1;
    average = total/4;

    cout<<"\nThe total of four numbers is: "<<total<<endl;
    cout<<"The average of four number is: "<<average<<endl;
}


void quo(void)
{
    system("cls");
   
    int dividend, divisor, quo, rem;

    cout<<"Prob 2:\n"<<"\nCOMPUTE QUOTIENT AND REMAINDER";
    cout<<"\n------------------------------------------\n";
    cout<<"\nInput the dividend: ";
    cin>>dividend;
    cout<<"\nInput the divisor: ";
    cin>>divisor;

    quo = dividend / divisor;
    rem = dividend % divisor;

    cout<<"\nThe quotient of the division is: "<<quo<<endl;
    cout<<"The remainder of the division is: "<<rem<<endl;

}

void quo2(int a2, int b2) {
    
   
    cout<<"\n------------------------------------------\n";
    int dividend, divisor, quo, rem;

    cout<<"Prob 2:\n"<<"\nCOMPUTE QUOTIENT AND REMAINDER";
    cout<<"\n------------------------------------------\n";
    /*  cout<<"\nInput the dividend: ";
      cin>>dividend;
      cout<<"\nInput the divisor: ";
      cin>>divisor;*/

    quo = a2 / b2;
    rem = a2 % b2;

    cout<<"\nThe quotient of the division is: "<<quo<<endl;
    cout<<"The remainder of the division is: "<<rem<<endl;

}

void quad(void)
{
  system("cls");

    int a, b, c, d;
    float root1, root2;

    cout<<"Problem 3:"<<"\nROOTS OF QUADRATIC EQUATION";
    cout<<"\n------------------------------------------\n";
    cout << "\nInput value of a:"<<endl;
    cin>> a;

    cout << "Input value of b:"<<endl;
    cin>> b;

    cout << "Input value of c:"<<endl;
    cin>> c;

    d = sqrt(b*b-4*a*c);

    //cout<<"Your discriminant is: "<<d<<endl;

    root1 = (-b+d)/2*a;
    root2 = (-b-d)/2*a;

    cout<<"\nRoot 1: " <<root1<<endl<<"Root 2: "<<root2<<endl;

   
}

void quad2(int a4, int b4, int c4)
{
 
    cout<<"\n------------------------------------------\n";
    int a, b, c, d;

    float root1, root2;

    cout<<"Problem 3:"<<"\nROOTS OF QUADRATIC EQUATION";
    cout<<"\n------------------------------------------\n";
    /*  cout << "\nInput value of a:"<<endl;
      cin>> a;

      cout << "Input value of b:"<<endl;
      cin>> b;

      cout << "Input value of c:"<<endl;
      cin>> c;*/

    d = sqrt(b4*b4-4*a4*c4);

    //cout<<"Your discriminant is: "<<d<<endl;

    root1 = (-b4+d)/2*a4;
    root2 = (-b4-d)/2*a4;

    cout<<"\nRoot 1: " <<root1<<endl<<"Root 2: "<<root2<<endl;

    
}

void squarecube(void)
{
     system("cls");

    int num1A, square, cube;

    cout<<"Problem 4:\n"<<"\nSQUARE AND CUBE";
    cout<<"\n------------------------------------------\n";
    cout << "\nInput a number: "<<endl;
    cin>>num1A;

    square = num1A*num1A;
    cube = num1A*num1A*num1A;

    cout<<"\nSquare = "<<square<<endl<<"Cube = "<<cube<<endl;

    
}

void squarecube2(int num1A1)
{
    
    cout<<"\n------------------------------------------\n";

    int num1A, square, cube;

    cout<<"Problem 4:\n"<<"\nSQUARE AND CUBE";
    cout<<"\n------------------------------------------\n";
    /*  cout << "\nInput a number: "<<endl;
      cin>>num1A;*/

    square = num1A1*num1A1;
    cube = num1A1*num1A1*num1A1;

    cout<<"\nSquare = "<<square<<endl<<"Cube = "<<cube<<endl;

 
}

void areapermiteter(void)
{
    system("cls");
    int length, width, Area, Perimeter;
    cout<<"Problem 5: "<<"Area and Perimeter";
    cout<<"\n------------------------------------------\n";
    cout<<"Input length: "<<endl;
    cin>>length;

    cout<<"Input width: "<<endl;
    cin>>width;

    Area = length*width;
    Perimeter = 2*(length+width);

    cout<<"\nArea = "<<Area<<endl<<"Perimeter = "<<Perimeter<<endl;

    
}

void areapermiteter2(int length2, int width2)
{
    
    cout<<"\n------------------------------------------\n";
    int length, width, Area, Perimeter;
    cout<<"Problem 5: "<<"Area and Perimeter";
    cout<<"\n------------------------------------------\n";
    /* cout<<"Input length: "<<endl;
     cin>>length;

     cout<<"Input width: "<<endl;
     cin>>width;*/

    Area = length2*width2;
    Perimeter = 2*(length2+width2);

    cout<<"\nArea = "<<Area<<endl<<"Perimeter = "<<Perimeter<<endl;

}

void swapped(void)
{
     system("cls");
    int a1, b1, temp;
    cout<<"Problem 6:"<<"\nSwapped Values";
    cout<<"\n------------------------------------------\n";
    cout << "Input value of a: "<<endl;
    cin>>a1;

    cout<<"Input value of b: "<<endl;
    cin>>b1;

    temp = a1;
    a1 = b1;
    b1= temp;

    cout<<"\nSwapped Values"<<endl;
    cout<<"a = "<<a1<<endl<<"b = "<<b1<<endl;

   
}

void swapped2(int a5, int b5)
{
    
    cout<<"\n------------------------------------------\n";
    int a1, b1, temp;
    cout<<"Problem 6:"<<"\nSwapped Values";
    cout<<"\n------------------------------------------\n";
    /*  cout << "Input value of a: "<<endl;
      cin>>a1;

      cout<<"Input value of b: "<<endl;
      cin>>b1;*/

    temp = a5;
    a5 = b5;
    b5= temp;

    cout<<"\nSwapped Values"<<endl;
    cout<<"a = "<<a5<<endl<<"b = "<<b5<<endl;

   

}

void GNpay(void)
{
  
  system("cls");
    cout<<"Problem 7:"<<"\nGross Pay and Net Pay";
    cout<<"\n------------------------------------------\n";
    int employee_number1, noOfhours, ratePerhour, netPay, grossPay;
    char employee_name1[100];

    cout << "Input employee number: ";
    cin>>employee_number1;

    cout<<"Input employee name: ";
    cin>>employee_name1;

    cout<<"Input number of hours worked: ";
    cin>>noOfhours;

    cout<<"Input rate per hours: ";
    cin>>ratePerhour;

    grossPay = noOfhours*ratePerhour;
    netPay = grossPay-(grossPay*0.1);

    cout<<"\nGross Pay = "<<grossPay<<endl<<"Net Pay = "<<netPay<<endl;

    
}
void GNpay2(int a6, int b6)
{
   

    cout<<"\n------------------------------------------\n";
    cout<<"Problem 7:"<<"\nGross Pay and Net Pay";
    cout<<"\n------------------------------------------\n";
    int employee_number1, noOfhours, ratePerhour, netPay, grossPay;
    char employee_name1[100];

    /* cout << "Input employee number: ";
     cin>>employee_number1;

     cout<<"Input employee name: ";
     cin>>employee_name1;

     cout<<"Input number of hours worked: ";
     cin>>noOfhours;

     cout<<"Input rate per hours: ";
     cin>>ratePerhour;*/

    grossPay = a6*b6;
    netPay = grossPay-(grossPay*0.1);

    cout<<"\nGross Pay = "<<grossPay<<endl<<"Net Pay = "<<netPay<<endl;

  
}

void arithop(void)
{
    system("cls");
    cout<<"Problem 8:"<<"\nArithmetic Operations";
    cout<<"\n------------------------------------------\n";
    int num1B, num2A, sum, diff, prod, quo1;

    cout << "Input first number: ";
    cin>>num1B;

    cout<<"Input second number: ";
    cin>>num2A;

    sum = num1B+num2A;
    diff = num1B-num2A;
    prod = num1B*num2A;
    quo1 = num1B/num2A;

    cout<<"\nSum = "<<sum<<endl;
    cout<<"Difference = "<<diff<<endl;
    cout<<"Product = "<<prod<<endl;
    cout<<"Quotient = "<<quo1<<endl;

}

void arithop2(int num1A2, int num2A1)
{
    
    cout<<"\n------------------------------------------\n";
    cout<<"Problem 8:"<<"\nArithmetic Operations";
    cout<<"\n------------------------------------------\n";
    int num1B, num2A, sum, diff, prod, quo1;

    /* cout << "Input first number: "<<endl;
     cin>>num1A2;

     cout<<"Input second number: "<<endl;
     cin>>num2A1;*/

    sum = num1A2+num2A1;
    diff = num1A2-num2A1;
    prod = num1A2*num2A1;
    quo1 = num1A2/num2A1;

    cout<<"\nSum = "<<sum<<endl;
    cout<<"Difference = "<<diff<<endl;
    cout<<"Product = "<<prod<<endl;
    cout<<"Quotient = "<<quo1<<endl;

    
}

void ac(void)
{

    system("cls");
    cout<<"Problem 9:"<<"\nArea and Circumference";
    cout<<"\n------------------------------------------\n";
    int d1;
    float pi, Area1, Circumference;

    cout << "Input diameter"<<endl;
    cin>>d1;

    pi = 3.1416;

    Area1 = (pi*(d1*d1))*1/4;
    Circumference = pi*d1;

    cout<<"\nArea = "<<Area1<<endl;
    cout<<"Circumference = "<<Circumference<<endl;

    
}

void ac2(int d6)
{

    cout<<"\n------------------------------------------\n";
    cout<<"Problem 9:"<<"\nArea and Circumference";
    cout<<"\n------------------------------------------\n";
    int d1;
    float pi, Area1, Circumference;

    /*cout << "Input diameter"<<endl;
    cin>>d1;*/

    pi = 3.1416;

    Area1 = (pi*(d6*d6))*1/4;
    Circumference = pi*d6;

    cout<<"\nArea = "<<Area1<<endl;
    cout<<"Circumference = "<<Circumference<<endl;

}

int fah (void)
{
   system("cls");
    cout<<"Problem 10:"<<"\nCelcius to Fahrenheit";
    cout<<"\n------------------------------------------\n";
    int c1, Fahrenheit;

    cout << "Input celcius: "<<endl;
    cin>>c1;

    Fahrenheit = (c1*9/5)+32;

   // cout<<"\nFahrenheit = "<<Fahrenheit<<endl;

    
    getch();
return Fahrenheit;
}


int fah2(int c7)
{

  
cout<<"\n------------------------------------------\n";
                cout<<"Problem 10:"<<"\nCelcius to Fahrenheit";
                cout<<"\n------------------------------------------\n";
                int c1, Fahrenheit;

                /*cout << "Input celcius: "<<endl;
                cin>>c1;*/

                Fahrenheit = (c7*9/5)+32;

                //cout<<"\nFahrenheit = "<<Fahrenheit<<endl;

              
            
              return Fahrenheit;
}

int totalsales(void)
{
system("cls");
            cout<<"Problem 11:"<<"\nTotal Sales";
            cout<<"\n------------------------------------------\n";
            int salesman_number, unit_sold, unit_price, Total_sales;
            char salesman_name[100];

            cout << "Input salesman number: ";
            cin>>salesman_number;

            cout<<"Input salesman name: ";
            cin>>salesman_name;

            cout<<"Input unit sold: ";
            cin>>unit_sold;

            cout<<"Input unit price: ";
            cin>>unit_price;

            Total_sales = unit_sold*unit_price;

          //  cout<<"\nTotal sales = "<<Total_sales<<endl;

           // cin.get();
            getch();
            
            return Total_sales;
}


int totalsales2(int a7, int b7)
{


cout<<"\n------------------------------------------\n";
            cout<<"Problem 11:"<<"\nTotal Sales";
            cout<<"\n------------------------------------------\n";
            int salesman_number, unit_sold, unit_price, Total_sales;
            char salesman_name[100];

           /* cout << "Input salesman number: ";
            cin>>a7;

            cout<<"Input salesman name: ";
            cin>>b7;

            cout<<"Input unit sold: ";
            cin>>c7;

            cout<<"Input unit price: ";
            cin>>d7;*/

            Total_sales = a7*b7;

           // cout<<"\nTotal sales = "<<Total_sales<<endl;

           // cin.get();
            getch();
            return Total_sales;
}

int change(void)
{
system("cls");
            cout<<"Problem 12:"<<"\nChange";
            cout<<"\n------------------------------------------\n";
            int order_number, total_amount_of_tender, amount_tender, Change;

            cout << "Input order number: ";
            cin>>order_number;

            cout<<"Input total amount of tender: ";
            cin>>total_amount_of_tender;

            cout<<"Input amount of tender: ";
            cin>>amount_tender;

            Change = amount_tender-total_amount_of_tender;

           // cout<<"\nChange = "<<Change<<endl;

           // cin.get();
          getch();
            return Change;
}

int change2(int a8, int b8)
{
   
cout<<"\n------------------------------------------\n";
            cout<<"Problem 12:"<<"\nChange";
            cout<<"\n------------------------------------------\n";
            int order_number, total_amount_of_tender, amount_tender, Change;

            /*cout << "Input order number: ";
            cin>>order_number;

            cout<<"Input total amount of tender: ";
            cin>>total_amount_of_tender;

            cout<<"Input amount of tender: ";
            cin>>amount_tender;*/

            Change = a8-b8;

            //cout<<"\nChange = "<<Change<<endl;

            //cin.get();
            getch();
            
            return Change;
}

/*---------------------------------------------------------------------------------------------------------------------------------------
Selection Menu Functions
-----------------------------------------------------------------------------------------------------------------------------------------
*/

void pnn(void){

system("cls");

    cout<<"Positivie, Negative, or Neutral"<<endl;
    cout<<"---------------------------------------"<<endl;
    
    int numA; 

    cout<<"Input a number:";
    cin>>numA;

    if (numA>0){
        cout<<"POSITIVE"<<endl;
    }

    else{
        if(numA<0){
            cout<<"NEGATIVE"<<endl;
        }
        else{
            cout<<"NEUTRAL"<<endl;
        }
    
    }
    getch();
}


void pnn2(int numA){

    //system("cls");

    cout<<"\nPositivie, Negative, or Neutral"<<endl;
    cout<<"---------------------------------------"<<endl;
    
    //int numA; 

    //cout<<"Input a number:";
    //cin>>numA;

    if (numA>0){
        cout<<"POSITIVE";
    }

    else{
        if(numA<0){
            cout<<"NEGATIVE";
        }
        else{
            cout<<"NEUTRAL";
        }
    
    }
    getch();
}

void oddeven(void){

     system("cls");
    cout<<"Odd or Even"<<endl;
    cout<<"--------------------"<<endl;

    int numB;

    cout<<"Input a number: ";
    cin>>numB;

    if(numB%2==0){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
 getch();

}

void oddeven2(int numB){
   
 cout<<"\nOdd or Even"<<endl;
 cout<<"--------------------"<<endl;

    //int numB;

    //cout<<"Input a number: ";
    //cin>>numB;

    if(numB%2==0){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
 getch();
}

int large3(int num1A, int num2A, int num3A){

system("cls");

    cout<<"Largest among 3 numbers"<<endl;
cout<<"----------------------------"<<endl;

//int num1A, num2A, num3A;

/*cout<<"Input num1: ";
cin>>num1A;

cout<<"Input num2: ";
cin>>num2A;

cout<<"Input num3: ";
cin>>num3A;*/

if (num1A>num2A){
    if(num1A>num3A){
        //cout<<num1A<<" is the largest"<<endl;
       return num1A;
       getch();
    }
}
    else if(num2A>num3A){
        //cout<<num2A<<" is the largest"<<endl;
        return num2A;
        getch();
    }
    else{
        //cout<<num3A<<" is the largest"<<endl;
        return num3A;
        getch();
    }

}

int large2(int num1B, int num2B){
    system("cls");

cout<<"Largest among 2 numbers"<<endl;
cout<<"--------------------------"<<endl;

/*int num1B, num2B;

cout<<"Input num1: ";
cin>>num1B;

cout<<"Input num2: ";
cin>>num2B;*/

if (num1B>num2B){
//cout<<num1B<<" is the largest";

return num1B;
getch();}
else{
//cout<<num2B<<" is the largest";
return num2B;
getch();}

}

void primenum(void){

    system("cls");
cout<<"Prime or Not"<<endl;
cout<<"----------------------"<<endl;

int numC;
//int i=2;
bool prime = true;
cout<<"Input a number: ";
cin>>numC;


if (numC<=1){
    prime = false;
}

else if(numC==2){
    prime = true;
}

else{
    for (int i=2; i<numC; i++){
        if (numC%i==0){
            prime = false;
            break;
        }
    }
}

if (prime){
    cout<<"Prime";
}
else{
    cout<<"Not Prime";
}
getch();
}

void avrg(int prelim, int midterm, int finals){

    system("cls");
cout<<"Compute the average grade"<<endl;
cout<<"---------------------------------"<<endl;
int avrg;
/*int prelim, midterm, finals, avrg;

cout<<"Input prelim: ";
cin>>prelim;

cout<<"Input midterm: ";
cin>>midterm;

cout<<"Input finals: ";
cin>>finals;*/

avrg = (prelim+midterm+finals)/3;

cout<<"Average grade = "<<avrg<<endl;

if(avrg>=75)
  cout<<"Passed";

  else
  cout<<"Failed";

  getch();
}


float comm(void){

    system("cls");

cout<<"Total sales + Commission"<<endl;
cout<<"-----------------------------------"<<endl;

int salesman_number, unit_sold, unit_price;
float commission, Total_sales;
char salesman_name[100];

 cout << "Input salesman number: ";
    cin>>salesman_number;
    
    cout<<"Input salesman name: ";
    cin>>salesman_name;
    
    cout<<"Input unit sold: ";
    cin>>unit_sold;
    
    cout<<"Input unit price: ";
    cin>>unit_price;
    
    Total_sales = unit_sold*unit_price;
    
   // cout<<"\nTotal sales = "<<Total_sales<<endl;
    
    if (Total_sales<=10000){
    
    commission= Total_sales*0.10;
    
   // cout<<"\ncommission = "<<commission;
   return commission;
   getch();
    }
    
    else if (Total_sales<=15000){
    
    commission= Total_sales*0.15;
    
    //cout<<"\ncommission = "<<commission;
    return commission;
   getch();
    
    }
    
    else if (Total_sales<=20000){
    commission= Total_sales*0.20;
    
    //cout<<"\ncommission = "<<commission;
    return commission;
   getch();
    }
    
    else{
    
    commission= Total_sales*0.30;
    
    //cout<<"\ncommission = "<<commission;
    return commission;
   getch();
    }
  
  getch();
}

void vc(void){

    system("cls");

cout<<"Vowel or Consonant"<<endl;
cout<<"----------------------------"<<endl;

char c;

cout<<"input a letter: ";
cin>>c;

if(c=='A' || c=='a'){
    cout<<"Vowel";
}

else if(c=='E' || c=='e'){
    cout<<"Vowel";
}

else if(c=='I' || c=='i'){
    cout<<"Vowel";
}

else if(c=='O'|| c=='o'){
    cout<<"Vowel";
}

else if(c=='U' || c=='u'){
    cout<<"Vowel";
}

else{
    cout<<"Consonant";

}

getch();
}


/*------------------------------------------------------------------------------------------------------------------------------------
Looping Menu Functions
---------------------------------------------------------------------------------------------------------------------------------------
*/

void printten(void){

    system("cls");
{
cout<<"Print number from 1-10"<<endl;
cout<<"-------------------------------"<<endl;

int count = 0;

for (int i = 1; i<=10; i++){

    count = count + 1;
    cout<<count<<endl; 
}
}
}


void even(int N){
    system("cls");
{
cout<<" Print all even number numbers from 1 to N"<<endl;
cout<<"------------------------------------------------------------------------------"<<endl;

//int N;
int counter2 = 2;

//cout<<"Input a number: ";
//cin>>N;

while(counter2<=N){
    cout<<counter2<<endl;
    counter2 = counter2 + 2;
    
}
}
}

int factorial(int num){
    system("cls");
{
cout<<"Display its factorial"<<endl;
cout<<"------------------------------"<<endl;

int fact = 1;

/*cout << "Enter a positive integer: ";
cin >> num;*/

int i = 1;
do {
fact = fact * i;
i++;
} while (i <= num);

//cout << "Factorial of " << num << " is " << fact << endl;
return fact;
}
}



void fib(int n1){
    {
system("cls");

cout<<"Display the N fibonacci series."<<endl;
cout<<"------------------------------------"<<endl;

int count=1, a=0, b=1, c=0;

//cout<<"Input a number: ";
//cin>>n1;

do{

cout<<a;

c=a+b;
a=b;
b=c;
count++;

}
while(count<=n1);

}
}


void rev(void){

    {
system("cls");
cout<<"Display the reverse of the number."<<endl;
cout<<"-----------------------------------------------------------------------------------------------"<<endl;

int n2, r, rev=0;

cout<<"Input a number: ";
cin>>n2;

while(n2!=0){
r = n2 % 10;
rev = rev * 10 + r;
n2= n2/10;

}
cout<<rev;
}
}

void palindrome(void){

    {
system("cls");
cout<<"Identify whether the word is a palindrome."<<endl;
cout<<"-----------------------------------------------------------------------------------------------"<<endl;

string w;
string rev2="";
int i, length;

cout<<"Input a word: ";
cin>>w;

length = w.length();

i = length - 1;

while(i>=0){
    rev2 = rev2 + w[i];
    i--;
}

if (w==rev2)
cout<<w<<" is a palindrome";
else
cout<<w<<" is not a palindrome";
}
}


void binary(int n){

    {
system("cls");
cout<<"Convert a decimal number to binary number"<<endl;
cout<<"----------------------------------------------------"<<endl;

int remainder, count2=0, i=0, binaryno=0;

//cout<<"Input a decimal number: ";
//cin>>n;

while(n!=0){

    count2++;
    remainder = n%2;
    n=n/2;
    int a[count2]={remainder};
    cout<<remainder;
}
}
}


int sumeven(void){
{
system("cls");

cout<<"Sum of all even numbers from 1 to N."<<endl;
cout<<"-----------------------------------------"<<endl;

int n3, count3=1, sum=0;

cout<<"Input a number: ";
cin>>n3;

while(count3<=n3){

    if (count3%2==0){
    sum+=count3;   
    }
    count3++;   
}

//cout<<sum;
return sum;
}
}


int sumsquare(int n4, int n5){

    {
system("cls");
cout<<"Sum of the square of all even number from N to M. The value of N must be less than the value of M."<<endl;
cout<<"---------------------------------------------------------------------------------------------------------"<<endl;

int sum2=0, sqr;

/*cout<<"Input first number: ";
cin>>n4;

cout<<"Input second number (must be smaller than the first number): ";
cin>>n5;*/

if(n4<n5){

while(n4<=n5){
if(n4%2==0){
    sqr=n4*n4;
    sum2= sum2+sqr;
}
n4++;
}
//cout<<sum2;
return sum2;
}
}
}


    
void az(void){
    {
system("cls");
cout<<"Print letters from A-Z."<<endl;
cout<<"--------------------------------"<<endl;

for (char c = 'A';c<='Z';c++)
    cout<<c<<" ";


}
}


//============================================================================================================================
//function of nested for

void for1(int z) {
        for (int x=1; x <= z; x++) {
        for (int y = 1; y <= x; y++) 
            cout << "*";
        cout << endl;
    }
    getch();
}


void for2(int x) {
        for (x; x >= 1; x--) {
        for (int y = 1; y <= x; y++) 
            cout << "*";
        
        cout << endl;
    }
    getch();
}


void for3(int z) {
        for (int x=1; x <= z; x++) {
        for (int y = 1; y <= x; y++) 
            cout << y;
        
        cout << endl;
    }
    getch();
}


void for4(int x){
    for(x; x>=1; x--){
        for(int y=1; y<=x; y++)
            cout<<y;
        cout<<endl;
    }
    getch();
}

//=============================================================================================================================    
//function of nested while

void while1(int z){
    
    int x=1;
    while (x<=z){
        int y=1;

        while(y<=x){
            cout<<"*";
            y++;
        }
        x++;
        cout<<endl;
    }
   getch();

}

void while2(int x){

    while(x>=1){
        int y=1;
        while (y<=x){
            cout<<"*";
            y++;
        }
        x--;
        cout<<endl;
    }
    getch();
}

void while3(int z){

    int x=1;
    while(x<=z){
        int y=1;
        while(y<=x){
            cout<<y;
            y++;
        }
        x++;
        cout<<endl;
    }
    getch();
}

void while4(int x){

    while(x>=1){
        int y=1;
        while(y<=x){
            cout<<y;
            y++;
        }
        x--;
        cout<<endl;
    }
    getch();
}

//=================================================================================================================================
//function of nested do while

void dowhile1(int z){

    int x=1;
    do{
        int y=1;
        do{
            cout<<"*";
            y++;
        }
        while(y<=x);
        x++;
    cout<<endl;

    }
    while(x<=z);   

    getch();
}


void dowhile2(int x){

    do {
        int y=1;
        do{
            cout<<"*";
            y++;
        }
        while(y<=x);

        x--;
        cout<<endl;
    }
    while(x>=1);

    getch();
}

void dowhile3(int z){

    int x=1;
    do{
        int y=1;
        do{
            cout<<y;
            y++;
        }
        while(y<=x);
        x++;
        cout<<endl;
    }
    while(x<=z);

    getch();
}


void dowhile4(int x){

    do{
        int y=1;
        do{
            cout<<y;
            y++;
        }
        while(y<=x);
        x--;
        cout<<endl;
    }
    while(x>=1);

    getch();
}











}
#endif