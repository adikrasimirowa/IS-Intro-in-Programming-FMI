#include <iostream>

using namespace std;

int main()
{
    for (int i=100; i<=999; i++)
    {
        if ( i%100 == ((i/100)*(i/100)))
        {
            cout<<i<<" ";
        }
    }


    return 0;

}
