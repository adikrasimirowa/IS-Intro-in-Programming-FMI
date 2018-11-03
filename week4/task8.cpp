#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int a,b,num;
  cin>>a>>b>>num;

  if(num >=1 &&  num <= 101)
  {
    switch(num)
    {
        case 1: cout<<"a= "<<a++<<"b= "<<b++; break;
        case 2: cout<<"a= "<<c++<<"b= "<<b++; break;
        case 3: cout<<"sum= "<<a+b; break;
        case 4: cout<<"difference"<<a-b; break;
        case 5: cout<<"multiply= "<<a*b; break;
        case 6: cout<<"divide= "<<a/b; break;
        case 7: cout<<"modul= "<<abs(a)<<abs(b); break;
        case 8: cout<<"absolute= "<<a%b<<; break;
        case 9: cout<<"gradation="<< pow(a,b); break;
        default: cout<<"Something went wrong";break;
    }
  }
  else cout<<"Wrong number;";
    return 0;
}
