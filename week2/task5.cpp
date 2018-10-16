#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double s,a,b,c,h,p;
   //a)
   cout<< "Enter one side and hight"<<endl;
   cin>>a>>h;
   s=(a*h)/2;

   cout<<s;

   //b)
   cout<<"Enter two more sides"<<endl;
   cin>> b >> c;
   p=(a+b+c)/2;
   s=sqrt(p*(p-a)*(p-b)*(p-c));
   cout<<s;

    return 0;
}
