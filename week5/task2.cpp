#include <iostream>

using namespace std;

int main()
{
    int n, sum=0;
    cin>>n;
    for(int i=n; i>=10; i--)
    {
        sum+=i/10+i%10;

    }
    cout<<sum;

    return 0;

}
