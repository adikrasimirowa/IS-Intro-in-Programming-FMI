#include <iostream>

using namespace std;

int main()
{
    int num, countNum=0, sum=0;

    do{
        cin>>num;
        sum+=num;
        countNum++;
    }while(countNum< 5);
    cout<<sum;
    return 0;

}
