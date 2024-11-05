#include<iostream>
using namespace std;
int main() {
	char ch;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		cout << char(ch - 32) << endl;
	}
	else
	{
		cout << char(ch+1) << endl;
	}
	return 0;
}