
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

void DecimalToBinary(int arr[], int n)
{    
    Matrix(arr,n);
    int j=0,temp,arr2[100];
    
    for(int i=0 ; i<n; i++)
   {
    int num = arr[i];
    while(arr[i]!=0)
    {
      temp= arr[i]%2;
      arr2[j++] = temp;
      arr[i]/= 2;
      
    }
     cout<<num<<" - ";
     for(int z=j-1;z>=0;z--)
    {
     cout<<arr2[z];
    }
    cout<<endl;
    j= 0;
      
   }
   
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
   
    DecimalToBinary(arr,n);
}
