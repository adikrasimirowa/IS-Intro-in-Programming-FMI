#include <iostream>

using namespace std;

int main()
{   int n,sum=0;
    cin>>n;
    if(n>=10 && n<=100)
    {
        for(int i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                sum+=i;
            }

        }
        cout<<"sum= "<<sum;
    }
    else
    cout<<"large number";

    return 0;

}
