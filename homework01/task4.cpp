#include <iostream>

using namespace std;

int main()
{
  int number,code,lastNumber,count=0,balance=5;

do{
    cout<<"WELCOME! WHAT YOU CHOOSE TO DO TODAY:"<<endl;
    cout<<"1.Press one to check your balance."<<endl;
    cout<<"2.Press two to charge your voucher."<<endl;
    cout<<"3. Exit"<<endl;
    cin>>number;
    switch(number)
    {
        case 1:
            cout<<"Your balance is:"<<balance<<"lv"<<endl<<endl;
        break;
        case 2:
            cout<<"Enter code:"<<endl;
            cin>>code;
            while(code > 0)
            {
                lastNumber=code%10;
                code=code/10;
                if(lastNumber == 5)
                {
                    count++;
                    if(count == 3 )
                    {
                     cout<<"10lv have been added to your account"<<endl<<endl;
                     balance+=10;
                     break;
                    }
                }

            }
            if( count == 0)
            {
                cout<<"Incorrect code"<<endl;
            }

        break;
        case 3: break;
        default: cout<<"You have entered wrong number"<<endl; break;

    }
} while(number != 3);
cout<<"Bye bye";

  //2





    return 0;
}
