#include <iostream>
#include <conio.h>

using namespace std;

void even(int array[][2], int rows){

for (int i=0;i<rows;i++){
    for (int j=0;j<2;j++){
      if (array[i][j]%2==0){
        cout<<"Even number is: "<<array[i][j]<<endl;
      }
    }
  }


}
//===================================================================================================
void large( int Array[][2], int rows){

  int num1=0,num2=0,num3=0;

  cout<<"\nThe three largest numbers are : "<<endl;
	for(int i=0;i<5;i++){
    for(int j=0;j<2;j++){
		if(Array[i][j]>num1){
		 num3=num2;
		 num2=num1;
		 num1=Array[i][j];
		 
		 }
		 
		else if(Array[i][j]>num2){
		 num2=num1;
		 num1=Array[i][j];
		 
		}
		
		else if(Array[i][j]>num3){
		 num3=Array[i][j];
		 
		 } 

    }      
}

     cout<<num1<<endl;
     cout<<num2<<endl;
     cout<<num3<<endl;

}


void posneg(int array[][2], int row){

  int totalP = 0, totalN = 0; // Initialize both variables to 0

    

    // Compute the sum of positive and negative numbers
    for (int i=0; i<5; i++) {
      for(int j=0; j<2;j++){
        if (array[i][j] > 0) {
            totalP += array[i][j];
        }
        else {
            totalN += array[i][j];
        }
      }
    }

    // Output the results
    cout << "\nThe sum of positive numbers is: " << totalP << endl;
    cout << "The sum of negative numbers is: " << totalN << endl;

}

int main(){

  //print 2d array  
  /*int array[5][2];

  for(int i=0;i<5;i++){
    for(int j=0;j<2;j++){
      cout<<"Enter a number for row: "<<i+1<<" and colum "<<j+1<<": ";
      cin>>array[i][j];
    }
  }
  
  even(array,5);
  
  
//cout<<array[1][0];

//==================================================================

system("cls");


    int Array[5][2];
	
    //int i=0;

    for(int i=0;i<5;i++){
      for(int j=0; j<2;j++){
    	cout<<"Enter a number for row "<<i+1<<" and column "<<j+1<<" : ";
      	cin>>Array[i][j];
      }
	}
	
	large(Array,5);

//=================================================================================================
  
    int array[5][2];
    
 // Input the contents of the array
    for (int i=0; i<5; i++) {
      for(int j=0; j<2;j++){
        cout << "Enter element for row " << i+1 << " and column "<<j+1<<": ";
        cin >> array[i][j];
      }
    }

   posneg(array,5);*/

   
    int count=0;
    int arr[100], no, size;

    cout<<"Enter size: ";
    cin>>size;


   for (int i=0; i<size;i++) {
    
    cout<<"Enter Element "<<i+1<<": ";
    cin>>arr[i];
}

    cout<<"\n\nEnter a number: ";
    cin>>no;


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
 
 




    return 0;
}