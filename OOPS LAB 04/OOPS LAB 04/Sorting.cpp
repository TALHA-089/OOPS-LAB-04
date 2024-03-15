#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

bool CustomSort(int a, int b)
{
    return a > b;
}

list<int> Merge(list<int>& a, list<int>& b) 
{
    list<int> mergedlist;


    for (int value : a)
    {
        mergedlist.push_back(value);
    }
    for (int value : b)
    {
        mergedlist.push_back(value);
    }

    mergedlist.sort();
    return mergedlist;
}

int main() 
{

    list<int> list1 = { 55, 88, 11, 45, 65, 84 };
    list<int> list2 = { 69, 12, 32, 41, 54, 75 };

    list1.sort(CustomSort);
    list2.sort();

    cout << "\n\nCustom Sorted List: ";

    for (int it : list1)
    {
        cout << "\t" << it;
    }

    cout << "\n\nSorted List: ";

    for (int it : list2) 
    {
        cout << "\t" << it;
    }

    list<int> Mergedlist = Merge(list1, list2);

    cout << "\n\nMerged and Sorted List: ";

    for (int it : Mergedlist) 
    {
        cout << "\t" << it ;
    }

    cout << endl << endl;
    system("pause>0");
    return 0;
}