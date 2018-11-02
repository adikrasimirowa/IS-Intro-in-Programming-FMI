#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        int num;
        double x;

    cout<<"Enter a number from 1 to 4"<<endl;
    cin>> num;

    switch(num)
    {
        case 1:
            cout<<"y = x - 5"<<endl;
            cout<<"Enter x:";
            cin>>x;
            cout<<"y= "<<x -5<<endl;
            break;
        case 2:
            cout<<"y = sin(x)"<<endl;
            cout<<"Enter x:";
            cin>>x;
            cout<<"y= "<<sin(x)<<endl;
            break;
        case 3:
            cout<<"y = cos(x)"<<endl;
            cout<<"Enter x:";
            cin>>x;
            cout<<"y= "<<cos(x)<<endl;
            break;
        case 4:
            cout<<"y = exp(x)"<<endl;
            cout<<"Enter x:";
            cin>>x;
            cout<<"y= "<<exp(x)<<endl;
            break;
        default: cout<<"Wrong number";break;

    }



    return 0;
}
