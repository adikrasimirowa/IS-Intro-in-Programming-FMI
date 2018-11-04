#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num,sum=0;

    cin>>num;
    for(int i=0; i<=num; i++)
    {
        sum+=pow(i,2);
    }
    cout<<sum<<endl;
    cin>>num;
    for(int i=0; i<=num-1; i++)
    {
        if(i%2 == 0)
            cout<<i<<" ";

    }


}
