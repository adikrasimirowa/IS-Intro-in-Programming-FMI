#include <iostream>
using namespace std;
int main()
{
    int rows;
    char a,b;

    cin >> rows>>a>>b;

    for(int i = 0; i < rows; i++)
    {
        if(i==rows-1)
        {
          for(int j = 0; j <rows-1; j++)
          {
            cout<<a<<" ";
          }
          cout<<b;
        }
        else
        {
            cout<<a<<" ";
            for(int j = 0; j <rows-1; j++)
            {
                cout << b << " ";
            }
        }
        cout << endl;
    }

    return 0;

    return 0;
}
