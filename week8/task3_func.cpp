
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

void Factoriel(int arr[], int n)
{    
    Matrix(arr,n);
    int factoriel=1;
    for(int i=0 ; i<n; i++)
   {
        for(int j=2 ; j<=arr[i]; j++)
        {
            factoriel=factoriel*j;
        }
        cout<<arr[i]<<"!= "<<factoriel<<endl;
        factoriel=1;
   }
  
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    Factoriel(arr,n);
}
