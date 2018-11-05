#include <iostream>

using namespace std;

int main()
{
    int n,k,ans=1;
    cin>>n;
    cin>>k;
    //ans=n!/(n-k)!
    for (int i=n-k+1; i <= n;i++)
    {
        ans*=i;
    }
    for (int i=1; i <= k;i++)
    {
        ans/=i;
    }
    cout<<ans<<endl
    return 0;
}
