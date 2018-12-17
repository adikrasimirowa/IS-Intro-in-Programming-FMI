
#include <iostream>
#include <string>
using namespace std;
 
void Matrix(int arr[], int n)
{  
   for(int i=0 ; i<n; i++)
   {
       cin>>arr[i];
   }
    
}

void NewMatrix(int arr[], int n)
{  
    Matrix(arr,n);
    for(int i=n-1 ; i>=0; i--)
   {
       cout<<arr[i];
   }
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    NewMatrix(arr,n);
}
