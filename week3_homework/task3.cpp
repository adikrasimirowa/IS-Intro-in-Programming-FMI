#include <iostream>
using namespace std;

int main()
{
    int figure;
    int a,b,c,d,r,h;
    cout<<"Please enter 1,2,3,4 or 5"<<endl;
    cin>>figure;
    switch (figure)
    {
        case 1:
            cout<<"Enter sides and height"<<endl;
            cin>>a>>b>>c>>h;
            cout<<"P= "<<a+b+c<<endl<<"S= "<<a*h/2;
            break;
        case 2:
            cout<<"Enter side"<<endl;
            cin>>a;
            cout<<"P= "<<4*a<<endl<<"S="<<a*a;
            break;
        case 3:
            cout<<"Enter radius"<<endl;
            cin>>r;
            cout<<"P= "<<2*3.14*r <<endl<<"S= "<<3.14*r*r;
            break;
        case 4:
            cout<<"Enter sides"<<endl;
            cin>>a>>b;
            cout<<"P= "<<2*(a+b) <<endl<<"S= "<<a*b;
            break;
        case 5:
            cout<<"Enter sides and height "<<endl;
            cin>>a>>b>>c>>d>>h;
            cout<<"P= "<<a+b+c+d<<endl<<"S= "<<(a+b)*h/2;
            break;
        default: cout<<"Wrong number"; break;
        }


    return 0;
}
