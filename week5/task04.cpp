#include <iostream>
using namespace std;
int main()
{
    int rows, num = 1;

    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                num = 1;
            else
                num = num*(i-j+1)/j;

            cout << num << " ";
        }
        cout << endl;
    }

    return 0;

    return 0;
}
