//JHON CARL T. ORMITA 
//BSIT 1-1 


#include <iostream>
#include <conio.h>
#include <cmath>
#include <windows.h>
#include <string>
using namespace std;

void gotoxy(short x,short y) //function for clearscreen

{
   COORD pos = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void Display_All_Even(void){
 //Array even numbers

 system("cls");

    int num[10];

for (int i=0; i<10;i++){
    cout<<"Enter a number "<<i+1<<": ";
    cin>>num[i];
    
    }

cout<<"\n";

for (int i=0; i<10; i++){
   
    if (num[i] % 2 == 0){
       cout<<"Even number is: "<<num[i]<<endl;
       }
    }
    
}



void Display_All_Even(int num[]){
cout<<"\n";
 

for (int i=0; i<10; i++){
   
    if (num[i] % 2 == 0){
       cout<<"Even number is: "<<num[i]<<endl;
       }
    }

    getch();
}


//=====================================================================================

void Largest_Three(void){

    system("cls");


    int Array[10],num1=0,num2=0,num3=0;
	
    //int i=0;

    for(int i=0;i<=9;i++){
    	cout<<"Enter a number "<<i+1<<" : ";
    	
    	cin>>Array[i];
	}
	
	cout<<"\nThe three largest numbers are : "<<endl;
	for(int i=0;i<=9;i++){
		if(Array[i]>num1){
		 num3=num2;
		 num2=num1;
		 num1=Array[i];
		 
		 }
		 
		else if(Array[i]>num2){
		 num2=num1;
		 num1=Array[i];
		 
		}
		
		else if(Array[i]>num3){
		 num3=Array[i];
		 
		 }       
}

     cout<<num1<<endl;
     cout<<num2<<endl;
     cout<<num3<<endl;



}

void Largest_Three( int Array[]){

    
    int num1=0,num2=0,num3=0;
	
    //int i=0;

    
	
	cout<<"\nThe three largest numbers are : "<<endl;
	for(int i=0;i<=9;i++){
		if(Array[i]>num1){
		 num3=num2;
		 num2=num1;
		 num1=Array[i];
		 
		 }
		 
		else if(Array[i]>num2){
		 num2=num1;
		 num1=Array[i];
		 
		}
		
		else if(Array[i]>num3){
		 num3=Array[i];
		 
		 }       
}

     cout<<num1<<endl;
     cout<<num2<<endl;
     cout<<num3<<endl;

}

 //===============================================================================================================
 void Total_Pos_Neg(void){
    
    system("cls");

    int array[10];
    int totalP = 0, totalN = 0; // Initialize both variables to 0

    // Input the contents of the array
    for (int i=0; i<10; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> array[i];
    }

    // Compute the sum of positive and negative numbers
    for (int i=0; i<10; i++) {
        if (array[i] > 0) {
            totalP += array[i];
        }
        else {
            totalN += array[i];
        }
    }

    // Output the results
    cout << "\nThe sum of positive numbers is: " << totalP << endl;
    cout << "The sum of negative numbers is: " << totalN << endl;

 }

void Total_Pos_Neg(int array[] ){
    
    
cout<<"\n";
    
    int totalP = 0, totalN = 0; // Initialize both variables to 0

    // Input the contents of the array
   

    // Compute the sum of positive and negative numbers
    for (int i=0; i<10; i++) {
        if (array[i] > 0) {
            totalP += array[i];
        }
        else {
            totalN += array[i];
        }
    }

    // Output the results
    cout << "The sum of positive numbers is: " << totalP << endl;
    cout << "The sum of negative numbers is: " << totalN << endl;

 }

 
//===============================================================
 void Count_Int(int arr[], int size, int no){


    int count=0;

   for (int i=0; i<size; i++){
    if(arr[i]==no){
        count +=1; 
    }
   }

    if (count>0){
        cout<<"\nThe occurrences of "<<no<<" in the array are: "<<count;
    }
    else{
        cout<<"\nThere is no occurences of "<< no<< " int he array";
    }
 getch();
 }
 
void Count_Int(int arr1[100], int size){

int no, count=0;


   cout<<"\n\nEnter a number: ";
   cin>>no;


   for (int i=0; i<size; i++){
    
    if(arr1[i]==no){
        count +=1;
        
    
   }
   }
    if (count>0){
        cout<<"\nThe occurrences of "<<no<<" in the array are: "<<count;
    }
    else{
        cout<<"\nThere is no occurences of "<< no<< " in the array";
    }

getch();

}


void pyramid(int row){
 
char x=65;

while (x<row+65){
    
    char y='A';

    while(y<=x){
        cout<<x<<" ";
       y ++;
    } 
    x++;
    cout<<endl;
}

}





int occurs(int ar[], int sizee){
int max_count = 0;
   int most_occured = 0;

   for(int i=0; i<sizee; i++)
   {
    int count =1;

    for(int j=i+1; j<sizee; j++)
    {
        if( ar[i]==ar[j])
        {
            count++;           
        }
    }
        
    if(count>max_count)
    {
        max_count = count;
        most_occured = ar[i]; 
        
    }
     
   }



  return most_occured;
}






int main(){
    int choice;
    
do{
system("cls");




cout<<"Main Menu\n";
cout<<"1 - Display all even\n";
cout<<"2 - Largest three\n";
cout<<"3 - Total Pos Neg\n";
cout<<"4 - occurence\n";
cout<<"5 - Most occured\n";
cout<<"6 - Pyramid\n";
cout<<"7 - Exit\n";
cout<<"Enter your choice: ";
cin>>choice;





switch (choice){

    case 1: 
     
    Display_All_Even();

//=================================
    int num[10];
     
    cout<<"\n\n";

    for (int i=0; i<10;i++){
    cout<<"Enter a number "<<i+1<<": ";
    cin>>num[i];
    } 

    Display_All_Even(num);


    break;



    case 2:
    
    Largest_Three();

    int Array[10];
    
    cout<<"\n";

    for(int i=0;i<=9;i++){
    	cout<<"Enter a number "<<i+1<<" : ";
    	cin>>Array[i];
	}

     Largest_Three(Array);

      getch();
      break;



    case 3:
     
     Total_Pos_Neg();
     
//====================================================
    
     int array[10];

      cout<<"\n\n";

      for (int i=0; i<10; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> array[i];
    }

    Total_Pos_Neg(array);
   
    getch();
    break;




    case 4:

    system("cls");

    int arr[100], no, size;

    cout<<"Enter size: ";
    cin>>size;

    cout<<"\n";

   for (int i=0; i<size;i++) {
    
    cout<<"Enter Element "<<i+1<<": ";
    cin>>arr[i];
}

    cout<<"\nEnter a number: ";
    cin>>no;

    Count_Int(arr,size,no);

//===================================================
   getch();

    break;

    case 5:
    system("cls");
    int sizee;

    cout<<"Enter how many elements: ";
    cin>>sizee;

     int ar[100];

    cout<<"Enter the elements"<<endl;
     for(int i=0; i<sizee;i++)
     {
    
      cin>>ar[i];
     }
   
    cout<<"The most occured number is: " <<occurs(ar,sizee);

   getch();
    break;

    case 6:
    {
        system("cls");
        int row;

        cout<<"Enter row: ";
        cin>>row;

        pyramid(row);
        getch();
        break;
    }

    case 7:
    system("cls");
    exit(0);
    break;

    default:
    cout<<"Invalid choice";
    getch();
    break;
}
}while(choice);



    getch();
    return 0;
}