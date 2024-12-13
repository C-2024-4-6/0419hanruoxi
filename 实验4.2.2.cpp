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
			cout << "输入的不是合法的十六进制字符串" << endl;
			return -1;
		}
		result = result * 16 + digit;
	}
		return result;
}
int main()
{
	char hexString[100];
	cout << "请输入一个16进制字符串：" << endl;
	cin >> hexString;
	int decimal = parseHex(hexString);
	if (decimal != -1)
	{
		cout << "十六进制字符串 " << hexString << " 转换后的十进制数为: " << decimal << endl;
	}
	return 0;
}