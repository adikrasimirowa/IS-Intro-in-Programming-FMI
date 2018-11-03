#include <iostream>

using namespace std;

int main()
{
    int num;
    char symbol;
    cin>>num>>symbol;


    for(int j=0; j<num; j++)
    {
        cout<<symbol;

    }
    cout<<endl;
    for (int i=0; i<num; i++)
    {
       cout<<"+";


    }
    cout<<endl;
    for (int i=0; i<num; i++)
    {
       cout<<symbol;


    }
    cout<<endl;



    return 0;

}
