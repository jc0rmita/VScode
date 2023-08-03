#include <iostream>
using namespace std;


void mTable(int ar[][10]){
int total=10;

for(int i=0;i<total;i++)
{
    for(int j=0; j<total;j++)
    {
        ar[i][j]=(i+1)*(j+1);
        
    }
}

for(int i1=0;i1<total;i1++)
{
    for(int j1=0;j1<total;j1++)
    {
        cout<<" "<<ar[i1][j1]<<"\t";
    }
    cout<<endl;
}

}

int main(){
int ar[10][10];

mTable(ar);
    return 0;
}