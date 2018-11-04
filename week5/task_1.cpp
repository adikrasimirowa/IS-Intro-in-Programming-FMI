#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    //a)
    switch(num)
    {
        case 1: case 2: case 3: cout<<"Winter";break;
        case 4: case 5: case 6: cout<<"Spring";break;
        case 7: case 8: case 9: cout<<"Summer";break;
        case 10: case 11: case 12: cout<<"Autumn";break;
        default: cout<<"Wrong number";
    }
    //b)
     cin>>num;
    switch(num)
    {
        case 1: case 2: case 3: case 4: case 5: cout<<"work work"; break;
        case 6: case 7: cout<<"Fiesta";break;

        default: cout<<"Wrong number";
    }

    return 0;

}
