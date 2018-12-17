#include <iostream>
#include <string>
using namespace std;

void Matrix(int arr[100][100], int n, int m)
{  
   for(int i=0 ; i<n; i++)
   {
        for(int j=0 ; j<m; j++)
        {
         cin>>arr[i][j];
        }
   }
    
}

void RowCheck(int arr[100][100], int n, int m)
{  
    int odd = 0, even = 0;
   for(int i=0 ; i<n; i++)
   {
        for(int j=0 ; j<m; j++)
        {
         if(arr[i][j]%2==0)
         {
             even++;
         } 
         else 
         {
             odd++;
         }
         
         
        }
        cout<<endl;
        cout<<"Row"<<i<<endl;
        cout<<"Even: "<<even<<endl;
        cout<<"Odd: "<<odd<<endl;
        cout<<endl;
        even =0;
        odd=0;
   }
    
}

void ColCheck(int arr[100][100], int n, int m)
{  
    int odd = 0, even = 0;
   for(int i=0 ; i<n; i++)
   {
        for(int j=0 ; j<m; j++)
        {
         if(arr[j][i]%2==0)
         {
             even++;
         } 
         else 
         {
             odd++;
         }
         
        }
          cout<<endl;
         cout<<"Col"<<i<<endl;
        cout<<"Even: "<<even<<endl;
        cout<<"Odd: "<<odd<<endl;
        cout<<endl;
       even =0;
        odd=0;
   }
    
}

int main()
{
    int arr[100][100];
    int n,m;
    cin>>n>>m;
   Matrix(arr,n,m);
    RowCheck(arr,n,m);
   ColCheck(arr,n,m);
}
