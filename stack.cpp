#include "stack.hpp"

Stack::Stack()
{
    top = nullptr;
}

void Stack::push(int val)
{
    Node* newNode = new Node(val);
    newNode->setNext(top);
    top = newNode;
}

int Stack::pop()
{
    if(top == nullptr)
    {
        return -1;
    }
    else
    {
        Node* garbage = top;
        int val = top->getValue();
        top = top->getNext();
        garbage->setNext(nullptr);
        delete garbage;
        return val;
    }
}

bool Stack::isEmpty()
{
    if(top == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}