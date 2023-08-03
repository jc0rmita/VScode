#include <iostream>
#include <cmath>
#include <conio.h>
#include <windows.h>
using namespace std;
int week;
const int days = 7;
int step[100000][days];


void weeklystep(int step [][days], int week) //global declaration ~
{

    for (int i = 0; i < week; i++) //traversing row
    
   
     for (int j = 0; j < days; j++) //column
     {

        cout<<" Your steps for the " << " Week " << i+1 << " Day " << j+1 << " : "; //Week 1 / day 1
        cin>>step[i][j]; 
     } 
}
void totalstep(int step [][days], int week)
{
    int totalsteps = 0;
     for (int i = 0; i < week; i++) //week
     {
        for (int j = 0; j < days; j++) // each day
        {
           totalsteps += step[i][j]; //totaling 
        }
        
     }

    cout<<" Your total steps is: " <<totalsteps<<endl; //display results ~
}

void totalevenstep(int step [][days], int week) //total step
{
    int daystep = 0;

     for (int i = 0; i < week; i++)
     {
        for (int j = 0; j < days; j++)
        {
            if (step[i][j] % 2 == 0)
            {
                daystep += step[i][j];
            }
        }
     }
       cout<<"Total of Even numbers in the step is " << daystep <<endl;

}



void arrays(int step [][days], int week) // Weekly even steps
{
    cout<<"Steps per week " <<endl;  
      cout<<" { "; //array set
     for (int i = 0; i < week; i++) {
    for (int j = 0; j < days; j++) {
        cout << step[i][j] << " ";
    if ( i == week-1 && j == days-1)
    {
        cout<<" } ";
    }else {
        cout<<", ";
    }
 }
    cout << endl;
 }
}

int converti(int step[][days], int week)
{
    double pound =0;
   int totalsteps=0;

    for(int i=0; i<week;i++){
        for(int j=0;j<days;j++){
          totalsteps+=step[i][j];

        }
    }

    pound = totalsteps / 35000;

    return pound;
}

//Sorting array in ascending

void Ascending(int step[][days], int week)
{
for(int i = 0; i < week; i++)
{

   for (int j = 0; j < days; j++)
   {
    for (int a = 0; a < days-1; a++)
    {
        if (step[i][a] > step[i][a+1])
        {
            swap(step[i][a], step[i][a+1]);
        }

    }
    
   }
}
 
 //sorted part
 cout<<" Sorted per day step for a week" <<endl;

 for (int i = 0; i < week; i++)
 {

cout<<" Week " << i+1 <<": ";
 //display by for loop
 
  for (int j = 0; j < days; j++)
  {
    cout<< step[i][j];
    if (j != days-1)
    {
        cout<<", ";
    }
  }


  cout<<endl;
 
 }
}

void Sequential(int step[][days], int week)
{

int x;
bool found = false; // initialization

//inputting

cout<<"Input ";
cin>>x;  

// process for sequential
for (int i = 0; i < week; i++)
 {
    for (int j = 0; j < days; j++)
    {
        if (step[i][j] == x)
        {
            found = true;
            cout<<" Founded at [ "<< i <<" ] [ "<< j << " ]" <<endl;
            break;
        }
    }
    if (found)
    {
        break;
    }

    if (!found)
    {
        cout<<" Not founded try again! " <<endl;
    }
 }
}

void Binary(int step[][days], int week, int target)
{
  // initialization flatten the 2d to 1d
  int track[week * days];
  int indicate[week * days][2];
  int counts = 0;

  for (int i = 0; i < week; i++) // for loop i increment
  {
    for (int j = 0; j < days; j++) // j for loop increment
    {
        track[counts] = step[i][j];
        indicate[counts][0] = i;
        indicate[counts][0] = j;
        counts++;
    }
  }

// sorting the flatten array using bubble sort
for (int i = 0; i < week * days; i++) // for loop
 {
    for (int j = 0; j < week * days; j++)
    {
        if (track[j] > track[j+1])
        {
            swap(track[j], track[j+1]);
            swap(indicate [j][0], indicate[j+1][0]);
            swap(indicate[j][i], indicate[j+1][i]);

        }
    }
 }

 // process of binary search
 int left = 0;
 int right = week * days - 1;

 while (left <= right) //while 
 {
   int mid = (left + right) /2;
   
   if (track[mid] == target) //if 
   {
     //element found shows
     cout<<" Found at week " << indicate[mid][0] + 1 << ", Day " << indicate[mid][1] + 1 <<endl;
     return;
   } else if (track[mid] < target)
    {
       left = mid + 1;
    } else 
     {
         right = mid - 1;
     }
 }

 // if not found
 cout<< " Not found. Try again " <<endl;
}

int main()
{
int choice;

//Main Menu
do{
cout<<" Main Menu \n " <<endl;
cout<<" 1 - Weekly Step " <<endl;
cout<<" 2 - Totalstep " <<endl;
cout<<" 3 - Total Even step " <<endl;
cout<<" 4 - Array of steps " <<endl;
cout<<" 5 - Steps into pounds " <<endl;
cout<<" 6 - Sorting 2d array in ascending order " <<endl;
cout<<" 7 - Searching element in 2d array using sequential search " <<endl;
cout<<" 8 - Searching array using binary search " <<endl;
cout<<" 9 - Exit " <<endl;
cout<<"Enter your choice: ";
cin>>choice;


switch (choice){

case 1: ("cls");
do{
cout<<"How many weeks: ";
cin>>week;

if (week < 0|| week > 70)
{
    cout<<"Try again";
 }
}while (week < 0 || week > 70);
 weeklystep(step, week);
break;

case 2: ("cls");
totalstep(step, week);
break;

case 3: ("cls");
totalevenstep(step, week);
break;

case 4: ("cls");
arrays(step, week);
break;

case 5: ("cls");
cout<<" You've lost up to "<<converti<<(step, week) <<endl;
break;

case 6: ("cls");
Ascending(step, week);
break;

case 7: ("cls");
Sequential(step, week);
break;

case 8: ("cls");
Binary(step, week, days);
break;

case 9: ("cls");
cout<<" Thank you for trying and using this main menu " <<endl;
break;

default:
cout<<" Invalid input try again " <<endl;
break;
}


 }while (choice != 9);

 return 0;
}