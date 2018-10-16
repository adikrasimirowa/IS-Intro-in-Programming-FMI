#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cin>>num1>>num2>>num3;

    if(num1 > num2 && num1 > num3 ) {

        cout<<"num1="<<num1<<" is the biggest"<<endl;

        if(num2 > num3 ){
            cout<<"num3="<<num3<<" is the smallest"<<endl;
        }else{
            cout<<"num2="<<num2<<" is the smallest"<<endl;
        }

    }else if(num2 > num1 && num2 > num3){

        cout<<"num2="<<num2<<" is the biggest"<<endl;

        if(num1 > num3 ){
            cout<<"num3="<<num3<<" is the smallest"<<endl;
        }else{
            cout<<"num1="<<num1<<" is the smallest"<<endl;
        }
    }else{

        cout<<"num3="<<num3<<" is the biggest"<<endl;

        if(num1 > num2 ){
            cout<<"num2 ="<<num2<<" is the smallest"<<endl;
        }else{
            cout<<"num1="<<num1<<" is the smallest"<<endl;
        }
    }

    return 0;
}
