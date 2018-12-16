
#include <iostream>
#include <string>
using namespace std;

void funMatrix(int row, int col)
{
   int arr[100][100];
   for(int i=0; i<row; i++)
   {
       
       for(int j=0; j<col; j++)
       {
           if(i==j)
           {
               arr[i][j] = i;
           }
           else if(i>j)
           {
               
               arr[i][j] = i*j;
           }
           else if(i<j)
           {
                arr[i][j] = j-i;
           }
           
       }
   }
   
    for(int i=0; i<row; i++)
   {
       
       for(int j=0; j<col; j++)
       {
           cout<<arr[i][j]<<" ";
       }
       
       cout<<endl;
   }
}

int main()
{
   int n,m;


    cout<<"Enter number of rows and cols"<<endl;
    cin>>n>>m;
    cout<<endl;
    funMatrix(n,m);

  
}
