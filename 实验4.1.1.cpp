#include<iostream>
using namespace std;

int main()
{	
	int numbers[10];
	int diffNumbers[10];
	int diffCount = 0;
	cout << "Enter ten numbers:" ;
	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i]  ;
	}
	for (int i = 0; i < 10; i++)
	{
		bool diff = true;
		for (int j = 0; j < diffCount; j++)
		{
			if (numbers[i] == diffNumbers[j])
			{
				diff = false;
				break;
			}
		}
		if (diff)
		{
			diffNumbers[diffCount++] = numbers[i];
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i < diffCount; i++)
	{
		cout << diffNumbers[i] << '\t';
	}

	return 0;
}
