#include <iostream>
using namespace std;
int main()
{
    int rows;
    char a,b;

    cin >> rows>>a>>b;

    for(int i = 0; i < rows; i++)
    {
        cout<<a<<" ";
        for(int j = 0; j <rows-1; j++)
        {
            cout << b << " ";
        }

        cout << endl;
    }

    return 0;

    return 0;
}
