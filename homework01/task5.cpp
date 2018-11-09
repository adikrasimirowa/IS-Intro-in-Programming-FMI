#include <iostream>

using namespace std;

int main()
{
    int n, m, sum = 0, count = 0, secondCount = 0;

    cout<<"Enter numbers to create intrval [n,m]"<<endl;
    cin>>n>>m;

    for(int i = n; i <= m; i++)
    {
        for(int j = 1; j < i; j++)
        {
            if(i%j == 0)
            {
                sum+=j;
            }
        }
        for(int j = 1; j < sum; j++)
        {
            if(sum%j == 0)
            {
                count++;
            }
        }
        if(count == 0)
        {
            secondCount++;
        }
        sum = 0;
        count = 0;

    }
    cout<<secondCount<<endl;

    return 0;
    }
