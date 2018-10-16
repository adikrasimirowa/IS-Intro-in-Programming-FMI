#include <iostream>

using namespace std;

int main()
{
   int number;

   cin>>number;

   if(number >= 10 && number <= 99){
        cout<<"The number "<<number<<" is a two-digit number.";
   }else {
       cout<<"The number "<<number<< "is not a two-digit number.";
   }


    return 0;
}
