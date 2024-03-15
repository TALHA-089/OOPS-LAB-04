#pragma once
#include<iostream>
#include "Nodes.h"

using namespace std;

class Linkedlist
{
private:

	Node* head;
	Node* tail;

public:

	Linkedlist()
	{
		this->head = nullptr;
		this->tail = nullptr;
	}

	void append(int d)
	{
		Node* newnode = new Node(d);

		if (!head)
		{
			head = tail = newnode;
		}
		else
		{
			tail->next = newnode;
			newnode->prev = tail;
			tail = newnode;
		}
	}

	void Display_Linkedlist()
	{
		Node* temp = head;
		int node_count = 1;

		while (temp)
		{
			cout << "\n\nNode: " << node_count << " -> " << temp->data;
			node_count++;
			temp = temp->next;
		}

		cout << "\n\nNULL";
	}

	void search(int d)
	{
		Node* temp = head;
		int node_count = 1;
		while (temp)
		{
			if (temp->data == d)
			{
				cout << "\n\nData Found At Node: " << node_count;
				cout << "\n\nData: " << temp->data;
				return;
			}

			temp = temp->next;
			node_count++;

		}

		cout << "\n\nThe Requested Data does not exist.";
	}

	void Reverse_List(int n) 
	{
		Node* temp = tail;

		while (temp)
		{
			cout << "\n\nNode: " << n << " -> " << temp->data;
			temp = temp->prev;
			n--;
		}
		cout << "\n\nNULL";

	}

		
	~Linkedlist()
	{
		Node* temp;

		while (head)
		{
			temp = head;
			head = head->next;
			delete temp;
		}

	}

};