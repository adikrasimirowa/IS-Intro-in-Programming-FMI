#include <iostream>
using namespace std;

int main()
{
    int num,sum;

    cin>>num;
    for(int i=100; i<=999; i++)
    {
        sum = (i%10)+((i%10)/10)+(i/100);
        if( sum == num)
        {
            cout<<i<<" ";
        }
    }

   return 0;
}
