#include <iostream>

using namespace std;

int main()
{
   int years;
   cin>>years;

   int days = 365*years;
   int hours = 24*days;
   int minutes = 1440*days;
   int seconds =  86400*days;

   cout<<"Days: "<<days<<endl;
   cout<<"Hours: "<<hours<<endl;
   cout<<"Minutes: "<<minutes<<endl;
   cout<<"Seconds:"<<seconds;




    return 0;
}
