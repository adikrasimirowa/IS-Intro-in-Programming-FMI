#include <iostream>
using namespace std;

int main()
{
    int num, sum=0;

    cin>>num;
    for(int i = 1; i < num ; i++)
    {
        if(num%i == 0)
        {
            sum+=i;
        }


    }
     if(num == sum){
        cout<<"the number is perfect";
    }else
    {
        cout<<"number is not perfect";
    }

   return 0;
}
