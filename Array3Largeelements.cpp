#include<iostream>
using namespace std;



void index(){
	 int Array[10],num1=0,num2=0,num3=0,index1,index2,index3;
	
    //int i=0;

    for(int i=0;i<=9;i++){
    	cout<<"Enter a number "<<i+1<<" : ";
    	
    	cin>>Array[i];
	}
	
	cout<<"The three largest numbers are : "<<endl;
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

for (int i=0;i<10;i++){
	if (Array[i]==num1){
	    index1=i;
		//cout<<num1<<" is located at"<<index1;
	}

	else if (Array[i]==num2){
		index2=i;
		//cout<<num2<<" is located at"<<index2;
	}

	else if (Array[i]==num3){
		index3=i;
		//cout<<num3<<" is located at"<<index3;
	}
}

cout<<num1<<" is located at "<<index1<<endl;
cout<<num2<<" is located at "<<index2<<endl;
cout<<num3<<" is located at "<<index3<<endl;
}


//===================================================================================================================================

void index2(int Array[]){

	 int num1=0,num2=0,num3=0,index1,index2,index3;
	int totaleve, totalodd;
    //int i=0;
   for (int i=0;i<10;i++){
	cout<<Array[i]<<", \n";
   }
    
	cout<<"The three largest numbers are : "<<endl;
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

for (int i=0;i<10;i++){
	if (Array[i]==num1){
	    index1=i;
		//cout<<num1<<" is located at"<<index1;
	}

	else if (Array[i]==num2){
		index2=i;
		//cout<<num2<<" is located at"<<index2;
	}

	else if (Array[i]==num3){
		index3=i;
		//cout<<num3<<" is located at"<<index3;
	}
}

cout<<num1<<" is located at "<<index1<<endl;
cout<<num2<<" is located at "<<index2<<endl;
cout<<num3<<" is located at "<<index3<<endl;
	
}




int main()
{
   
	index();

int Array[10];

	for(int i=0;i<10;i++){
    	cout<<"Enter a number "<<i+1<<" : ";
    	
    	cin>>Array[i];
	}
	
    index2(Array);

    int Arr3[10]={1,2,3,4,5,6,7,8,9,10};
	index2(Arr3);
	

	
	return 0;
}