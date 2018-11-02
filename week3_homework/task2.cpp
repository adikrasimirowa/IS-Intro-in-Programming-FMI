#include <iostream>
using namespace std;

int main()
{
      int num, countNum = 1;
      cin>>num;

      for(int i=0; i<=8; i++ ){
        countNum++;
        cout<<countNum<<" - "<<(num%countNum == 0 ? "Yes" : "No")<<endl;
      }


    return 0;
}
