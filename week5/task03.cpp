#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n, arr[100], leftout,i=0;
    cin>>n;

    while (n != 0)
    {
        leftout = n%2;
        arr[i++] = leftout;
        n /= 2;
    }
    for(int j=i-1;j>=0;j--)
    cout<<arr[j];

    return 0;
}
