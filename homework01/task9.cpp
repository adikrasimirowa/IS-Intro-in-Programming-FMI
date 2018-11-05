#include <iostream>

using namespace std;

int main()
{
   int number, count=0;
   cout<<"Enter number:";
   cin>>number;

    while(number !=0)
    {
        count++;
        number=number/10;
    }

    cout<<"The number has "<<count<<" digits";

    return 0;
}
