#include <iostream>
#include <string>
using namespace std;

void swap(int *num1, int *num2){

    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    
    cout<< *num1<<" "<<*num2;

}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    
    swap(num1,num2);
}
