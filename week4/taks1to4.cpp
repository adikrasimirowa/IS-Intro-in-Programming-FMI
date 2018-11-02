#include <iostream>

using namespace std;

int main()
{
    cout<<"Task 1"<<endl;
    int num;
    cin>>num;
    switch(num)
    {
        case 0: cout<<"Spring"<<endl; break;
        case 1: cout<<"Summer"<<endl; break;
        case 2: cout<<"Fall"<<endl; break;
        case 3: cout<<"Winter"<<endl; break;
        default: cout<<"Wrong  num"; break;
    }

    cout<<endl;
    cout<<"Task 2"<<endl;
    cin>>num;
    switch(num)
    {
        case 0: cout<<"Asaia"<<endl; break;
        case 1: cout<<"Africa"<<endl; break;
        case 2: cout<<"Europe"<<endl; break;
        case 3: cout<<"South America"<<endl; break;
        case 4: cout<<"North America"<<endl; break;
        case 5: cout<<"Antraktida"<<endl; break;
        case 6: cout<<"Australia"<<endl; break;
        default: cout<<"Wrong  num"; break;
    }

     cout<<endl;
     cout<<"Task 3"<<endl;
    cin>>num;
    switch(num)
    {
        case 0: cout<<"Monday"<<endl; break;
        case 1: cout<<"Tuesday"<<endl; break;
        case 2: cout<<"Wensday"<<endl; break;
        case 3: cout<<"Thursday"<<endl; break;
        case 4: cout<<"Friday"<<endl; break;
        case 5: cout<<"Saturday"<<endl; break;
        case 6: cout<<"Sunday"<<endl; break;
        default: cout<<"Wrong  num"; break;
    }
    cout<<endl;
    cout<<"Task 4"<<endl;
    cin>>num;
    switch(num)
    {
        case 0: cout<<" 0: ----"<<endl; break;
        case 1: cout<<" 1: .... "<<endl; break;
        case 2: cout<<"2: ...- "<<endl; break;
        case 3: cout<<"3: ..--"<<endl; break;
        case 4: cout<<" 4: ..---"<<endl; break;
        case 5: cout<<"5: .----"<<endl; break;
        case 6: cout<<" 6: -..."<<endl; break;
        case 7: cout<<"7: --.."<<endl; break;
        case 8: cout<<"8: ---.."<<endl; break;
        case 9: cout<<" 9: ----."<<endl; break;
        default: cout<<"Wrong  num"; break;
    }
    return 0;
}
