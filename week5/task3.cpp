#include <iostream>

using namespace std;

int main()
{   int br=0;
    for(int i=102; i<=987; i++)
    {
         if(i/100 != i%10 && i/100 != (i/10)%10 && i%10 != (i/10)%10)
        {
           br++;

        }

    }
    cout<<br;


    return 0;

}
