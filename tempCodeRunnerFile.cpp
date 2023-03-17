int choice;
do{
    system("cls");
gotoxy(63,1);
cout<<"Main Menu"<<endl;
gotoxy(50,3);
cout<<"1 - Print number from 1-10"<<endl;
gotoxy(50,4);
cout<<"2 - Print all even number numbers from 1 to N"<<endl;
gotoxy(50,5);
cout<<"3 - Display its factorial"<<endl;
gotoxy(50,6);
cout<<"4 - Display the N fibonacci series"<<endl;
gotoxy(50,7);
cout<<"5 - Display the reverse of the number"<<endl;
gotoxy(50,8);
cout<<"6 - Identify whether the word is a palindrome"<<endl;
gotoxy(50,9);
cout<<"7 - Convert a decimal number to binary number"<<endl;
gotoxy(50,10);
cout<<"8 - Sum of all even numbers from 1 to N"<<endl;
gotoxy(50,11);
cout<<"9 - Sum of square of all even numbers from 1 to N"<<endl;
gotoxy(50,12);
cout<<"10 - Print letters from A-Z";
gotoxy(50,13);
cout<<"11 - Exit"<<endl;

gotoxy(60,14);
cout<<"Enter your choice: ";
cin>>choice;

switch (choice){

case 1:
    printten();
    getch();
    break;

case 2:
even(10);
getch();
break;

case 3:
cout<<factorial(6);
getch();
break;


case 4:
fib(5);
getch();
break;

case 5:
rev();
getch();
break;


case 6:
palindrome();
getch();
break;

case 7:
binary(5);
getch();
break;



case 8:
cout<<sumeven();
getch();
break;

case 9:
cout<<sumsquare(2,6);
getch();
break;

case 10:
az();
getch();
break;

case 11:
system("cls");
exit(0);
getch();
break;


default:
gotoxy(63,15);
cout<<"Invalid choice";
getch();
break;

}
    }while(choice);
