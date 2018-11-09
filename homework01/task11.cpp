#include <iostream>

using namespace std;

int main()
{
   int number, count=0, sum=0, count2=0;

   cout<<"Enter numbers:"<<endl;
   do
   {
    cin>>number;
    if(number > 10 && number < 99)
    {
        count++;
        sum+=number;
    }
    count2++;
   }
   while(count2 < 5 && sum <= 234);
   cout<<count<<"sum= "<<sum;


    return 0;
}
