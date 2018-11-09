#include <iostream>

using namespace std;

int main()
{
    int lastNumber, number, saveNumber, change=0;

    cout<<"Enter any number:"<<endl;
    cin>>number;

    saveNumber=number;

    while(number>0)
    {
        lastNumber=number%10;
        number=number/10;
        change=change*10+lastNumber;
    }
    if(change==saveNumber)
    {
        cout<<"The number is palindrome";
    }
    else
    {
        cout<<"The number is not a palindrome";
    }


    return 0;
}
