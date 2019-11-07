#ifndef NODE
#define NODE

class Node
{
	private:
		int data;
		Node* next;
	public:
		Node(int data);
		int getValue();
		Node* getNext();
};

#endif