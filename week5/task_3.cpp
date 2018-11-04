#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    char value;
    cin>>value;


    if(isalpha(value))
    {
        cout<<"Letter";
    }
    else if(isdigit(value))
    {
        cout<<"Number"<<value*value;
    }
    else
        cout<<"Char";


    return 0;

}
