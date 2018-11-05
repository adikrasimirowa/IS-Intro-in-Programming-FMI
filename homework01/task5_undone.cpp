#include <iostream>

using namespace std;

int main()
{ int m, n, sum1=0, sum2=0;
   cin>>n>>m;

   for(int i = 1; i < n; i++)
   {
        if(n%i == 0){
              cout<<i<< " ";
              sum1+=i;
        }

   }
cout<<endl;
   for(int j = 1; j < m; j++)
   {
        if(m%j == 0){
              cout<<j<< " ";
              sum2+=j;
        }

   }
   cout<<endl<<sum1<<endl<<sum2;

    return 0;
}
