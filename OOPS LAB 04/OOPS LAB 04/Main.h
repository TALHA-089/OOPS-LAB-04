#pragma once
#include<iostream>
using namespace std;

void main_menu()
{
	cout << "\n\n-----------Main Menu-----------\n\n";
	cout << "\n\n1.Add Data";
	cout << "\n\n2.Search Data";
	cout << "\n\n3.Reverse Data";
	cout << "\n\n4.Display Data";
	cout << "\n\n5.Exit";
}

int Handle_Main_choice(int choice)
{

	do
	{
		cout << "\n\nEnter Your Choice: ";
		cin >> choice;

		if (choice < 1 || choice > 5)
		{
			cout << "\n\nInvalid Choice.";
		}

	} while (choice < 1 || choice > 5);

	return choice;
}