#include <iostream>

using namespace std;

int main()
{
    int sum=0,number;


    do {
        cin>>number;
        sum+=number;
    }while(number != 0);
    cout<<sum;
    return 0;
}
