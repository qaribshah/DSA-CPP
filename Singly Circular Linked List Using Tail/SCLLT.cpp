#include <iostream>
#include "Node.h"
#include "SCLLT.h"
using namespace std;
void SCLLT::insertAtTail(const int& value)
{
    Node* nn = new Node;
    nn->data = value;
    nn->next = nullptr;
    //empty linked list case
    if (tail == nullptr)
    {
        tail = nn;
        tail->next = tail;
    }
    //non empty case
    else
    {
        nn->next = tail->next;
        tail->next = nn;
        tail = nn;
        // nn->next = tail;
        // tail = nn;
    }
}
void SCLLT::display() const
{
    if (tail == nullptr)
    {
        cout << "Linked List is empty." << endl;
    }
    Node* temp = tail->next;
    while (1)
    {
        cout << temp->data << endl;
        temp = temp->next;
        if (temp == tail->next)
        {
            break;
        }
    }
}
int SCLLT::deleteAtTail()
{
    //empty list case
    int returningValue = 0;
    if (tail == nullptr)
    {
        return returningValue;
    }
    //single node case
    else if (tail->next == tail)
    {
        returningValue = tail->data;
        delete tail;
        tail->next = nullptr;
        return returningValue;
    }
    else
    {
        returningValue = tail->data;
        Node* temp = tail;
        while (1)
        {
            temp = temp->next;
            if (temp->next == tail)
            {
                break;
            }
        }
        temp->next = tail->next;
        delete tail;
        tail = temp;
        return returningValue;
    }
}