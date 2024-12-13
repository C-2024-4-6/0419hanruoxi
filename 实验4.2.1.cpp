#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1 = 0, len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	for (int i = 0; i <= len2 - len1; i++)
	{
		int j;
		for (j = 0; j < len1; j++)
		{
			if(s2[i+j]!=s1[j])
			{
				break;
			}
		}
		if (j == len1)
		{
			return i;
		}
	}
	return -1;
}

int main()
{ 
	const int max_length = 100;
	char s1[max_length],s2[max_length];
	cout << "Enter the first string:";
	cin.getline(s1, max_length);
	cout << "Enter the second string:";
	cin.getline(s2, max_length);
	cout << "indexOf is" << indexOf(s1, s2);
		return 0; 
}