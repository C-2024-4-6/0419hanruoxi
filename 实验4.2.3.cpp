#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int parseHex(const char* const hexString)
{
	int result = 0;
	int length = strlen(hexString);
	for (int i = 0; i < length; i++)
	{
		char ch = hexString[i];
		int digit;
		if (isdigit(ch))
		{
			digit = ch - '0';
		}
		else if (ch >= 'A' && ch <= 'F')
		{
			digit = ch - 'A' + 10;
		}
		else {
			cout << "����Ĳ��ǺϷ���ʮ�������ַ���" << endl;
			return -1;
		}
		result = result * 16 + digit;
	}
		return result;
}
int main()
{
	char hexString[100];
	cout << "������һ��16�����ַ�����" << endl;
	cin >> hexString;
	int decimal = parseHex(hexString);
	if (decimal != -1)
	{
		cout << "ʮ�������ַ��� " << hexString << " ת�����ʮ������Ϊ: " << decimal << endl;
	}
	return 0;
}