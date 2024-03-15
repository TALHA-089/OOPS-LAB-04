#pragma once
class Node
{
public:

	int data;
	Node* prev;
	Node* next;
	static int Node_count;

	Node(int d)
	{
		this->data = d;
		this->next = nullptr;
		this->prev = nullptr;
	}

};