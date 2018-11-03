#include <iostream>

using namespace std;

int main()
{   int n,sum=0,digit,br=0,maxNum=0;
    cin>>n;
    if(n>=3 && n<=10)
    {
        do{
            cin>>digit;
            if(digit>maxNum)
                maxNum=digit;
            sum+=digit;
            br++;
        }while(br != n);
        cout<<maxNum;
        cout<<"sum= "<<sum;
    }
    else
    cout<<"large number";

    return 0;

}
