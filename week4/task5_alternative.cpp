#include <iostream>

using namespace std;

int main()
{
    string cardArr[] = {"joker",
    "dvoika spatiq","dvoika karo","dvoika kupa","dvoika pika",
    "troika pika","troika karo","troika kupa","troika pika",
    "chetvorka pika","chetvorka karo","chetvorka kupa","chetvorka pika",
    "petica pika","petica karo","petica kupa","petica pika",
    "shestica pika","shestica karo","shestica kupa","shestica pika",
    "sedmica pika","sedmica karo","sedmica kupa","sedmica pika",
    "osmica pika","osmica karo","osmica kupa","osmica pika",
    "devqtka pika","devetka karo","devqtka kupa","devqtka pika",
    "desqtka pika","desqtka karo","desqtka kupa","desqtka pika",
    "vale pika","vale karo","vale kupa","vale pika",
    "dama pika","dama karo","dama kupa","dama pika",
    "pop pika","pop karo","pop kupa","pop pika",
    "aso pika","aso karo","aso kupa","aso pika"};
    int num;
    cin>>num;
    cout<<cardArr[num];

    return 0;
}
