#include <iostream>

using namespace std;

int main()
{
  int n, factorial=1;

  cout<<"Enter number"<<endl;
  cin>>n;

  for(int i=1; i<=n; i++)
         factorial*=i;
    cout<<n<<" factorial is: "<<factorial;

    return 0;
}
