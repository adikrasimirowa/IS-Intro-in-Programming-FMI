#include <iostream>
using namespace std;

int main()
{
    int value,sum=0;
//a)
   do{
    cin>>value;
    if(value <= 30)
    {
        sum+=value;
    }
   }while( sum != 100);
//b)

   do{
    cin>>value;
    sum+=value;

   }while( sum != 100);
    return 0;

}
