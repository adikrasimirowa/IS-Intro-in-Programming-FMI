#include <iostream>

using namespace std;

int main()
{
    int number, count=0,lastNum;
    cin>>number;
    while( number >0)
    {
        lastNum=number%10;
        number=number/10;
        if(lastNum%2==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
