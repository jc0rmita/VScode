#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<cmath>
#include<windows.h>
using namespace std;

void gotoxy (short x, short y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int main()
{
    int choice;
    do {

      system("cls");
      gotoxy(55,0);
        cout << "Main Menu\n";
    
        gotoxy(50,2);
        cout<<"1 - Problem 1";
        
        gotoxy(50,3);
        cout<<"2 - Problem 2";
        
        gotoxy(50,4);
        cout<<"3 - Quadratic Roots";
        
        gotoxy(50,5);
        cout<<"4 - Square and Cube ";
        
        gotoxy(50,6);
        cout<<"5 - Area and Perimeter";
        
        gotoxy(50,7);
        cout<<"6 - Swapped Values";
        
        gotoxy(50,8);
        cout<<"7 - Gross Pay and Net Pay";
        
        gotoxy(50,9);
        cout<<"8 - Arithmetic Operations";
        
        gotoxy(50,10);
        cout<<"9 - Area and Circumference";
        
        gotoxy(50,11);
        cout<<"10 - Celcius to Fahrenheit";
        
        gotoxy(50,12);
        cout<<"11 - Total Sales";
        
        gotoxy(50,13);
        cout<<"12 - Change";
        
        gotoxy(50,14);
        cout<<"13 - Exit";
    
        gotoxy (55,16);
        cout<<"Enter your choice: ";
        cin>>choice;
       


        switch(choice) {

        case 1:
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

            cin.get();
            getch ();
            break;



        case 2:
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
            cout<<"The remainder of the division is: "<<rem;

            cin.get();
            getch();
            break;

        case 3:
          system("cls");

            int a, b, c, d;
            float root1, root2;

            cout<<"Problem 3:n"<<"\nROOTS OF QUADRATIC EQUATION";
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

            cout<<"\nRoot 1: " <<root1<<endl<<"Root 2: "<<root2;

            cin.get();
            getch();
            break;

        case 4:
           system("cls");

            int num1A, square, cube;

            cout<<"Problem 4:\n"<<"\nSQUARE AND CUBE";
            cout<<"\n------------------------------------------\n";
            cout << "\nInput a number: "<<endl;
            cin>>num1A;

            square = num1A*num1A;
            cube = num1A*num1A*num1A;

            cout<<"\nSquare = "<<square<<endl<<"Cube = "<<cube<<endl;

            cin.get();
            getch();
            break;

        case 5:
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
           
        cin.get();
             getch();
            break;

        case 6:
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
           
        cin.get();
             getch();
            break;

        case 7:
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
           
            cin.get();
             getch();
            break;

        case 8:
            system("cls");
            cout<<"Problem 8:"<<"\nArithmetic Operations";
            cout<<"\n------------------------------------------\n";
            int num1B, num2A, sum, diff, prod, quo1;

            cout << "Input first number: "<<endl;
            cin>>num1B;

            cout<<"Input second number: "<<endl;
            cin>>num2A;

            sum = num1B+num2A;
            diff = num1B-num2A;
            prod = num1B*num2A;
            quo1 = num1B/num2A;

            cout<<"\nSum = "<<sum<<endl;
            cout<<"Difference = "<<diff<<endl;
            cout<<"Product = "<<prod<<endl;
            cout<<"Quotient = "<<quo1<<endl;
            
            cin.get();
            getch();
            break;

        case 9:
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
            
            cin.get();
            getch();
            break;

        case 10:
           system("cls");
            cout<<"Problem 10:"<<"\nCelcius to Fahrenheit";
            cout<<"\n------------------------------------------\n";
            int c1, Fahrenheit;

            cout << "Input celcius: "<<endl;
            cin>>c1;

            Fahrenheit = (c1*9/5)+32;

            cout<<"\nFahrenheit = "<<Fahrenheit<<endl;
           
            cin.get();
             getch();
            break;

        case 11:
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

            cout<<"\nTotal sales = "<<Total_sales<<endl;
            
            cin.get();
            getch();
            break;

        case 12:
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

            cout<<"\nChange = "<<Change<<endl;
           
            cin.get();
             getch();
            break;

        case 13:
           system("cls");
            exit (0);
            getch();
            break;

        default:

            gotoxy(50,17);
            {
                cout<<"Invalid choice";
            }
            getch();
            break;
        }

    }
    while (choice);


    getch();
    return 0;
}
