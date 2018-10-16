#include <iostream>

using namespace std;

int main()
{
   int number;
   cin>>number;

   if(number%2 == 1)
   {
       cout<<number<<" is an uneven number";
   }else{
       cout<<number<<" is an even number";
   }
    return 0;
}
