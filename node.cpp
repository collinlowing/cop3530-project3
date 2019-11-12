#include "node.hpp"

Node::Node(int data)
{
    this->data = data;
    next = nullptr;
}

int Node::getValue()
{
    return data;
}

void Node::setNext(Node* next)
{
    this->next = next;
}

Node* Node::getNext()
{
    return next;
}