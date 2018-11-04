#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    switch(num)
    {
        case 5: case 7: case 11: case 13: case 17: case 19: cout<<"nechetno prosto chislo"; break;
        case 6: case 8: case 10: case 12: case 14: case 16: case 18: case 20: cout<<"chetno ne prosto chislo";break;
        case 9: case 15: cout<<"nechetno ne prosto chislo";break;
        default: cout<<"Wrong number";

    }

    return 0;

}
