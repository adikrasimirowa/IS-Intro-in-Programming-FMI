#include <iostream>

using namespace std;

int main()
{
    int wis, daysCount=0, night = 1;

    cout<<"Enter well depth:"<<endl;
    cin>>wis;

    while(wis != 0) {
        wis--;
        daysCount++;
    }
    cout<<"After "<<daysCount-night<<"the frog is on top.";


    return 0;
}
