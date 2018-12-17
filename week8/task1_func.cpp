
#include <iostream>
#include <string>
using namespace std;

 int arr[100];
 
void Matrix( int n)
{  
   for(int i=0 ; i<n; i++)
   {
       cin>>arr[i];
   }
    
}

void NewMatrix( int n)
{   
    for(int i=n-1 ; i>=0; i--)
   {
       cout<<arr[i];
   }
}
int main()
{
    int n;
    cin>>n;
    Matrix(n);
    NewMatrix(n);
}
