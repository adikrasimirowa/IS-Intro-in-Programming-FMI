#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,quater, num2=1, br=0;
    cin>>num;
    quater=num*num;
    cout<<quater<<endl;
    while(num != 0)
    {
        num = num/10;
        br++;


    }

    for(int i=0; i < br; i++){
        num2=num2*10;
    }
    cout<<num2<<endl;

    if(quater%num2 == num)
    {
        cout<<"automorphic";
    }
    else cout<<"not automorphic";

    return 0;
}
