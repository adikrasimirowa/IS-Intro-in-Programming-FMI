// Example program
#include <iostream>
#include <string>
using namespace std;

int abs(int num)
{
    if(num < 0)
    {
        return num * (-1);
    }

    return num;
}

double Min(double x, double y)
{
    if(x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}



void pow( int num, double num1)
{   
    int result = 0;
    for(int i=0; i<num; i++)
    {
        result = num1;
        num1=result*num1;
    }
    
    cout<<num1;
}

double Max(double x, double y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

double minOf3(double x, double y )
{
    
    if(x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
double maxOf3(double x, double y )
{
    
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

void isAlpha(char letter)
{
    int l = letter;
      if( l >=65 && l <=122)
      {
          cout<<"True";
      }
}

void isDigit(char number)
{
    int n = number;
      cout<<n;
}

int main()
{
    //int num;
   // double num2,num3,num4;
   // char letter;
   char number;
   cin>>number;
   // cin>>letter;
   // cin>> num;
   // cin>> num2;
    //cin>>num3;
   // cin>>num4;
    //cout<<abs(num);
    
   // pow(num,num2);
   
  // cout<<Min(num2,num3)<<endl;
  // cout<<Max(num2,num3)<<endl;
  // cout<<minOf3(Min(num2,num3),Min(num2,num4));
  // cout<<maxOf3(Max(num2,num3),Max(num2,num4));
   
   //isAlpha(letter);
   isDigit(number);
  
}
