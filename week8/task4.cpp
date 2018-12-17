
#include <iostream>
#include <string>
using namespace std;

bool CheckPrime(int number)
{
    bool isPrime = true;
    
    for(int i = 2; i<number; i++)
    {
         if(number%i == 0)
         {
             isPrime = false;
             break;
         }
    }
    
    return isPrime;
}

void Sdvoeni( int n, int m )
{

    if( CheckPrime(n) && CheckPrime(m) )
    {
        if(n+2 == m)
        { 
            cout<<"True";
        }
        else
        {
            cout<<"False";
        }
    }
}

int main()
{
   int n,m;

  cin>>n>>m;
  
  Sdvoeni(n,m);
  
}
