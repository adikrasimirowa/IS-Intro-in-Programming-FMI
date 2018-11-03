#include <iostream>

using namespace std;

int main()
{
  int num;
  cin>>num;

  if(num >=1 &&  num <= 99)
  {
    if( num > 11 && num%10 != 9 )
    {
        if(num%10 == 1)
            cout<<"vratar";
        if(num%10 == 2 ||num%10 == 3 || num%10 == 4)
            cout<<"zashtitnik";
        if(num%10 == 5 ||num%10 == 6 || num%10 == 7 || num%10 == 8)
            cout<<"pulozashtitnik";
    }else cout<<"napadatel";
  }
  else cout<<"Wrong number;";
    return 0;
}
