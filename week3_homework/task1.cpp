#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    char symbol;

    cin>>num1>>symbol>>num2;

    switch(symbol)
    {
    case '+': cout<<num1+num2; break;
    case '-': cout<<num1-num2; break;
    case '*': cout<<num1*num2; break;
    case '/': cout<<num1/num2; break;
    case '%': cout<<num1%num2; break;

    default: cout<<"Error";
    }
    return 0;
}
