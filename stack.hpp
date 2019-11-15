#ifndef STACK
#define STACK

#include "node.hpp"

class Stack
{
	private:
		Node* top;
	public:
		Stack();
		~Stack();
		void push(int val);
		int pop();
		bool isEmpty();
};

#endif



