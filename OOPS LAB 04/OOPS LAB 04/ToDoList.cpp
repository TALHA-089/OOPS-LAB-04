#include<iostream>
#include<string>
#include<list>
#include<vector>

using namespace std;

class ToDoList
{
private:

	list <list <string> > N_list;
	vector <string> Name_of_Task;

public:

	void Set_Task(string nameofTask , list <string> N_list)
	{
		this->N_list.push_back(N_list);
		this->Name_of_Task.push_back(nameofTask);
	}
	
	void Display_Nlist()
	{
		int Main_count = 0;

		for (auto it : N_list)
		{
			cout << "\n\nMain Task " << Main_count + 1 << ": " << Name_of_Task.at(Main_count) << endl;
			int Sub_count = 0;

			for (auto i : it)
			{
				cout << "\n" << Sub_count + 1 << ". " << i;
				Sub_count++;
			}
			cout << endl << endl;
			Main_count++;
		}
	}
};


int main()
{
	ToDoList List;

	cout << "\n\n--------------------------Nested To Do List--------------------------\n\n";
	list <string> UniversityTasks = { "DO Lab Tasks","ISE Quiz","OOPS Assignment","OOPS Quiz"};
	list <string> HomeTasks = { "Cleaning","Cooking","Sleeping" };
	list <string> OnlineWork = { "Write a Blog","Code a Program","Make a Database","Watch Youtube Lectures" };

	List.Set_Task("University Tasks", UniversityTasks);
	List.Set_Task("Home Tasks", HomeTasks);
	List.Set_Task("Online Tasks", OnlineWork);


	List.Display_Nlist();

	cout << endl << endl;
	system("pause>0");
	return 0;
}