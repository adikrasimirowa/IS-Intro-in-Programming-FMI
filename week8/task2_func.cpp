
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

void EvenOdd(int arr[], int n)
{    Matrix(arr,n);
    int odd=0, even=0;
    for(int i=0 ; i<n; i++)
   {
       if(arr[i]%2 == 0)
       {
           even++;
       }
       else
       {
            odd++;
       }
   }
   
   cout<<"Even - >"<<even<<endl;
   cout<<"Odd - >"<<odd<<endl;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
   
    EvenOdd(arr,n);
}
