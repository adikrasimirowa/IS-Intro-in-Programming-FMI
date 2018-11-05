#include <iostream>

using namespace std;

int main()
{
    int n,k,ans=1;
    cin>>n;
    cin>>k;
    for (int i=n-k+1; i <= n;i++)
    {
        ans*=i;
    }
    cout<<ans;
    return 0;
}
