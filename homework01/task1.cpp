#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number;
    
    cin>>number;

    if(number%2 != 0 && number != 1)
    {
     for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            if(j == i || i == number-1-j || i == 0 || i == number-1 )
            {
                cout << "*";
            }
            else cout<<" ";


        }
        cout<<endl;
        }
    }
    else
    {
        cout<<"Wrong number";
    }

    return 0;
}
