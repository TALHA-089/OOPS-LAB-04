#include<iostream>
#include "Nodes.h"
#include "LinkedList.h"
#include "Main.h"

using namespace std;

int Node::Node_count = 0;

int main()
{
	Linkedlist list;

	while (true)
	{
		int choice = 0;
		main_menu();
		choice = Handle_Main_choice(choice);

		if (choice == 1)
		{
			int x = 0;
			cout << "\n\nEnter Data: ";
			cin >> x;
			list.append(x);
			Node::Node_count++;
			cout << "\n\nSuccessfully Added " << x << " to the list";
		}
		else if (choice == 2)
		{
			int x = 0;
			cout << "\n\nEnter Data for Search: ";
			cin >> x;
			list.search(x);
		}
		else if (choice == 3)
		{
			list.Reverse_List(Node::Node_count);
		}
		else if (choice == 4)
		{
			list.Display_Linkedlist();
		}
		else
		{
			break;
		}

		cout << endl;
		system("pause>0");
		system("cls");

	}

	cout << "\n\nGood Bye";
	cout << endl << endl;
	system("pause>0");
	return 0;
}