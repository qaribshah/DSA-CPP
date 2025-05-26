#include <iostream>
using namespace std;
#include "Node.h"
#include "SCLLT.h"

int main()
{
    SCLLT sll;
    sll.insertAtTail(-7);
    sll.insertAtTail(10);
    sll.insertAtTail(20);
    sll.insertAtTail(30);
    cout << sll.deleteAtTail() << endl;
    sll.display();
    return 0;
}