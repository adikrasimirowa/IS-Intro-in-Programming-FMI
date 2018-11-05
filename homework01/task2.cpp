#include <iostream>

using namespace std;

int main()
{  int month;
   double loan, rate,amountToReturn;

    cout<<"Enter loan,rate and month:"<<endl;
    cin>>loan>>rate>>month;

    amountToReturn=loan*(1+(month*rate)/100);

    cout<<endl;
    cout<<"Monthly interest rate:"<<rate/12<<endl;
    cout<<"q = "<<1+(month*rate)/100<<endl;
    cout<<"Monthly payment:"<<amountToReturn/month<<endl;
    cout<<"The total amount to be returned:"<<amountToReturn;

    return 0;
}
