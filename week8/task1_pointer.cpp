#include <iostream>
using namespace std;
void swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
	
	cout<<left<<right;
}

int main()
{
    int num1,num2;
    
    cin>>num1;
    cin>>num2;
    
    swap(num1,num2);

	return 0;
}
