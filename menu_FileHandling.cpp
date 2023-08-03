#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream> 
#include <string>
#include <sstream>
using namespace std;


void gotoxy(short x,short y)

{
   COORD pos = {x, y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


int main(){

//system("cls");
int choice;
do{
system("cls");

cout<<"Menu\n";
cout<<"1 - create a new text file and write some text into it.\n";
cout<<"2 - open an existing text file and display its contents on the console.\n";
cout<<"3 - count the number of lines in a text file.\n";
cout<<"4 - count the number of words in a text file.\n";
cout<<"5 - copy the contents of one text file to another\n";
cout<<"6 - exit\n";
cout<<"Enter your choice: \n";
cin>>choice;



switch(choice){

case 1:
{
system("cls");
 fstream myFile;
   string text;

   cout<<"Enter text: ";

   myFile.open("Ormita.txt",ios::out);//write
   if(myFile.is_open())
   {
    
    while(true){
    getline(cin,text);
    
    if (text == "exit"){
        break;
    }
    myFile<<text<<endl;
    }

     /*myFile << "Hi! I'm Ormita\n";
     myFile << "Hi! I'm Ormita\n";
     myFile << "Hi! I'm Ormita\n";*/
     myFile.close();
   }

getch();
break;
}

case 2:
{
system("cls");

fstream myFile;
myFile.open("Ormita.txt",ios::in);//read
if(myFile.is_open())
{
  string line;
  while(getline(myFile,line)){
    cout<< line <<endl;
  }

  myFile.close();
}

getch();
break;
}

case 3:
{
system("cls");
int count = 0;

fstream myFile;
myFile.open("Ormita.txt",ios::in);
if(myFile.is_open())
{
    string line;
    while(getline(myFile,line)){
        count ++;
       // cout<<line << endl;
    }
    cout<<"\nThe number of lines in a text file is: "<<count<<endl;
    myFile.close();
}

getch();
break;
}


case 4:
{/*
    system("cls");
    fstream myFile;
     myFile.open("Ormita.txt",ios::app);//append
   if(myFile.is_open())
   {
     myFile << "Bakit malungkot ang beshy ko?\n";
     myFile.close();
   }*/

   system("cls");
    
	string line;
	int count=0;
			    			
	fstream myFile;		    			
	myFile.open("Ormita.txt", ios::in);
	while (getline(myFile, line)) {

	stringstream ss(line);
	string word;

	while(ss>>word){
	count++;
	  }

	}

	myFile.close();
			    				
	cout<<"The number of word is : "<<count<<endl;
			    				

    getch();
    break;
}

case 5:
{
    system("cls");

// Open the input file
  ifstream inputFile("Ormita.txt");
  // Create or overwrite the output file
  ofstream outputFile("Ormita_copy.txt");

  if (inputFile.is_open() && outputFile.is_open()) {
    string line;

    while (std::getline(inputFile, line)) {
      // Write each line to the output file
      outputFile << line << "\n";
    }

    inputFile.close();
    outputFile.close();

    cout << "File copied successfully." << std::endl;
  } else {
    cout << "Failed to open the files." << std::endl;
  }
    getch();
    break;
}

case 6:
{
    system("cls");
    exit(0);    


    getch();
    break;
}

default:
{
    cout<<"Invalid choice";
    getch();
    break;
}


}//end of switch

}while(choice);
    return 0;
}
