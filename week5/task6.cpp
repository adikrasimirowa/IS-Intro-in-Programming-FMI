#include <iostream>

using namespace std;

int main()
{   int n,sum=0;
    cin>>n;
    if(n>=3 && n<=102)
    {
        for(int i=1; i<=n; i++)
        {
            sum+=i;
        }
        cout<<"sum= "<<sum;
    }
    else
    cout<<"large number";

    return 0;

}
