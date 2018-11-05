#include <iostream>

using namespace std;

int main()
{
   int number, count=0,sum=0;
   cout<<"Enter number:"<<endl;
   do{
    cin>>number;
    if(number > 1)
    {
        count++;
        sum+=number;
    }
   }while(number > 1);
   cout<<count<<" sum= "<<sum<<" average= "<< sum/count;


    return 0;
}
