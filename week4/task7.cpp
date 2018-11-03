#include <iostream>

using namespace std;

int main()
{
  int num;
  cin>>num;

  if(num >=1 &&  num <= 9)
  {
    switch(num)
    {
        case 1: cout<<"Merkurii"; break;
        case 2: cout<<"Venera"; break;
        case 3: cout<<"Zemq"; break;
        case 4: cout<<"Mars"; break;
        case 5: cout<<"Jupiter"; break;
        case 6: cout<<"Saturn"; break;
        case 7: cout<<"Uran"; break;
        case 8: cout<<"Neptun"; break;
        case 9: cout<<"Pluton"; break;
        default: cout<<"Something went wrong";break;
    }
  }
  else cout<<"Wrong number;";
    return 0;
}
