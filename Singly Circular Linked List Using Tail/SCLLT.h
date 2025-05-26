#pragma once
// Singly Circular Linked List Using tail Only
//#include "Node.h"
class SCLLT
{
private:
    Node* tail;
public:
    SCLLT() : tail(nullptr) {}
    SCLLT(Node* t) : tail(t) {}
    SCLLT(const SCLLT& s) : tail(s.tail) {}
    void insertAtTail(const int& value);
    void display() const;
    int deleteAtTail();
};