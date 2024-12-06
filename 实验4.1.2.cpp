#include<iostream>
#include<algorithm>
using namespace std;

int main()
{	
	double list[10];
		bool changed = true;
		cout << "Enter ten numbers:" << endl;
		for (int i = 0; i < 10; i++)
		{
			cin >> list[i];
		}
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j] , list[j + 1]);
				changed = true;
			}
	} while (changed);
	cout << "After bubble sort:";
	for (int c = 0; c < 10; c++)
	{
		cout<<list[c]<<'\t';
	}
	return 0;
}
