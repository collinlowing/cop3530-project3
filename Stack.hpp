#ifndef STACK
#define STACK

class Stack
{
	private:
		Node* top;
	public:
		void push(int val);
		int pop();
		bool isEmpty();
};

#endif



