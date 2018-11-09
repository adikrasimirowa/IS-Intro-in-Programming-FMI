#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, count=0, lastNum, sum=0, num2, num3, lastNum2;
    cin>>num;
    num2=num;
    num3=num;
    while(num != 0)
    {
       lastNum = num%10;
       num = num/10;
       count++;
    }
    while(num2 != 0)
    {
       lastNum2 = num2%10;
       num2 = num2/10;
       sum+=pow(lastNum2,count);
    }
    if(num3 == sum)
    {
        cout<<"is narcissistic";
    }
    else
    {
        cout<<"is not narcissistic";
    }
    
    return 0;
}
