#include <iostream>
#include <cctype>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		char ch = tolower(s[i]);
		if (ch >= 'a' && ch <= 'z')
		{
			counts[ch - 'a']++;
		}
	}
}

int main()
{ 
	int counts[26] = { 0 };
	const int max_length = 100;
	char s[max_length];
	cout << "Enter a string:";
	cin.getline(s, max_length);
	count(s, counts);
	for (int i = 0; i < 26;i++)
	{
		if (counts[i] > 0)
		{
			char letter = 'a' + i;
			cout << letter << "£º" << counts[i] << " times" << endl;
		}
	}

		return 0; 
}