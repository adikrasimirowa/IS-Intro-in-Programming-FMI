
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

double pow( double num, int num1)
{
    double result = 1;
    
    for(int i = 0; i <num1; i++)
    {
        result = result*num;
    }
    
    return result;
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
      if(n >= 48 && n <= 57)
      {
         cout<<"True";
      }
}

int main()
{
   int num;
   double num2,num3,num4;
   char letter;
   char number;
   cout<<"Enter 3 (type double) numbers:"<<endl;
    cin>> num2;
    cin>>num3;
    cin>>num4;
    cout<<endl;
   cout<<"Enter number (type int):"<<endl;
    cin>> num;
    cout<<endl;
   cout<<"Enter number:"<<endl;
     cin>>number;
     cout<<endl;
   cout<<"Enter letter:"<<endl;
   cin>>letter;
    
    cout<<"Abs of "<<num<<" is"<<abs(num)<<endl; 
    cout<<"POW of "<<num2<<" is"<<pow(num2,num)<<endl;
    cout<<"Min of "<<num2<<" and"<<num3<<" is"<<Min(num2,num3)<<endl;
    cout<<"Max of "<<num2<<" and"<<num3<<" is"<<<Max(num2,num3)<<endl;
    cout<<"Min of "<<num2<<", "<<num3<<"and"<<num4<<" is"<<minOf3(Min(num2,num3),Min(num2,num4))<<endl;
    cout<<"Max of "<<num2<<", "<<num3<<"and"<<num4<<" is"<<maxOf3(Max(num2,num3),Max(num2,num4));
   
    isAlpha(letter);
    isDigit(number);
  
}
