#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;


void gotoxy (short x, short y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}




void swap(int *num1, int *num2)
{
    int temp;
   
    temp = *num1;
   
    *num1 = *num2;

    *num2 = temp;
}



int main(){
int choice;




do{
    system("cls");
    cout<<"main menu\n";
    cout<<"1 - swap number\n";
    cout<<"2 - add 2 numbers\n";
    cout<<"3 - add 5 numbers\n";
    cout<<"4 - count string\n";
    cout<<"5 - copy string\n";
    cout<<"6 - concatinated\n";
    cout<<"7 - reverse\n";
    cout<<"8 - exit\n";
    cout<<"enter your choice: ";
    cin>>choice;


switch (choice){

    case 1:{
    			system("cls");
				int num1,num2;
	
					cout<<"Enter a number : ";
					cin>>num1;
					cout<<"Enter a number : ";
					cin>>num2;
	
						swap(&num1,&num2);
	
					cout<<"First number is : "<<num1<<"\n";
					cout<<"First number is : "<<num2<<"\n";
					system("pause");

				break;
		   	}
		      
		    case 2:{
		    	system("cls");
    			int num1,num2,*n1,*n2,sum=0;
	
					cout<<"Enter two numbers : ";
					cin>>num1>>num2;
	
						n1=&num1;
						n2=&num2;
	
						sum=*n1+*n2;
	
					cout<<"The sum is : "<<sum<<"\n";
					system("pause");
			    break;
			}
			
			case 3:{
				system("cls");
				int arr[5],sum=0;
				int *ptr;
	
					cout<<"Enter 5 array : \n";
						for(int i=0;i<5;i++){
							cout<<"Enter a number : ";
							cin>>arr[i];
						}
	
							ptr=arr;
							
						for(int i=0;i<5;i++){
							sum += *(ptr+i);
						}
					cout<<"The sum is : "<<sum;
					system("pause");

			    break;
			}
			
			case 4:{
				system("cls");
				char text[100];
    			char * str = text;
    			int count = 0;
 
   
    				cout<<"Enter any string: ";
    				cin>>text;
 
    
    					while(*(str++) != '\0') count++;
 
   					cout<<"Length of "<<text<<" is "<<count;
   					system("pause");
				break;
		 	}
			
			case 5:{
				system("cls");
				char text1[100], text2[100];
    			char * str1 = text1;
   				char * str2 = text2;
 

    				cout<<"Enter any string: "<<endl;
   					cin>>text1;
 	

   						 while(*(str2++) = *(str1++));
 
    				cout<<"First string: "<<text1<<endl;;
    				cout<<"Second string: "<<text2<<endl;
    				system("pause");
				break;
			}
			
			case 6:{
				system("cls");
				char str1[100], str2[100];
    			char * s1 = str1;
    			char * s2 = str2;
 

    				cout<<"Enter 1st string: ";
    				cin>>str1;
    				cout<<"Enter 2nd string: ";
    				cin>>str2;
 

    					while(*(++s1));
 

    					while(*(s1++) = *(s2++));
 
    				cout<<"Concatenated string:"<<str1;
    				system("pause");
				break;
			}
			
			case 7:{
				system("cls");
 				int arr[5],i;
     			int *p=arr;
     			
     				cout<<"Enter five numbers separated by space:";
     				cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
     				cout<<"Your entered numbers in reverse order are:\n";
     					for(i=4;i>=0;i--){
        					cout<<*(p+i)<<endl;
        				}
        				system("pause");
				break;

                
			}

            case 8:
            {
            system("cls");
            exit(0);
            getch();
            break;

            }


}
} while(choice);


return 0;
}