#include<iostream>
using namespace std;

int main()
{	
	bool lockers[100] = { false };
	for (int student = 1; student <= 100; student++)
	{
		for (int locker = 0; locker < 100; locker += student)
		{
			lockers[locker] = !lockers[locker];
		}
	}
		cout << "���ŵĴ����Ϊ��" << endl;
		for (int i = 0; i < 100; i++)
		{
			if (lockers[i])
			{
				cout << (i+1) << '\t';
			}
		}

	return 0;
}
