#include<iostream>
#include<list>

using namespace std;

void main_menu()
{
	cout << "\n\n-------------Main Menu--------------\n\n";
	cout << "\n\n1.Add Row";
	cout << "\n\n2.Delete a Row";
	cout << "\n\n3.Display SpreadSheet";
	cout << "\n\n4.Exit";
	cout << "\n\nEnter Your Choice: ";
}


int main()
{
	int choice = 0;
	list <list<int>> SpreadSheet;
	cout << "\n\nEnter the Columns For the SpreadSheet: ";
	int cols = 0;
	cin >> cols;
	
	while (1)
	{
		main_menu();
		cin >> choice;

		if (choice == 1)
		{
			int* newRow = new int[cols];
			list <int> newlist;

			for (int i = 0; i < cols; i++)
			{
				cout << "\n\nEnter Number " << i + 1 << ": ";
				cin >> newRow[i];

				newlist.push_back(newRow[i]);

				if(i == cols - 1)
				{
					SpreadSheet.push_back(newlist);
				}

			}

			delete []newRow;
			cout << "\n\nNew Row Successfully Added";
		
		}
		else if (choice == 2)
		{
			cout << "\n\nEnter Which Row Do you Want to Delete: ";
			int row;
			cin >> row;

			auto it = SpreadSheet.begin();
			advance(it, row - 1);
			SpreadSheet.erase(it);

			cout << "\n\nRow " << row << " Successfully Deleted.";
		}
		else if (choice == 3)
		{
			cout << "\n\n--------------------SpreadSheet-----------------\n\n";
			for (const auto& Row : SpreadSheet)
			{
				for (int value : Row)
				{
					cout <<" | " << value<<" | ";
				}
				cout << endl;
			}
		}
		else
		{
			break;
		}

		system("pause>0");
		system("cls");
		
	}


	cout << endl << endl;
	system("pause>0");
	return 0;
}