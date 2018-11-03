#include <iostream>

using namespace std;

int main()
{   int n;
    cin>>n;
    if(n>=2 && n<=27)
    {
        for(int i=100; i<=999; i++)
        {
            if(((i/100)+(i%10)+((i/10)%10))== n)
            {
                cout<<i<<" ";
            }

        }
    }
    else
    cout<<"large number";

    return 0;

}
