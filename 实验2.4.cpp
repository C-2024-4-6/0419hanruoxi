#include<iostream>
using namespace std;
int main() {
	double a, b;
	char op;
	double c=0.0;
	cout <<"�������һ������" << endl;
	cin >> a;
	
	cout << "�����������(+��-��*��/��%)��" << endl;
	cin >> op;

	cout << "������ڶ�������" << endl;
	cin >> b;
	bool result = true;
	switch(op)
	{
		case '+':
			c=a + b;
			break;
		case'-':
			c=a - b;
			break;
		case'*':
			c=a * b;
			break;
		case'/':
			if(b==0)
			{
				cout << "��������Ϊ0" << endl;
				result = false;
			}
			else
			{
				c=a / b;
			}
			break;
		case'%':
			static_cast<int>(a, b);
			if(b==0||a<b)
			{
				cout << "����" << endl;
				result = false;
			}
			else
			{
				c = static_cast<int>( a) % static_cast<int>(b);
			}
			break;
		default:
			cout << "������Ƿ�" << endl;
			result = false;
			break;
	}
	if (result)
		cout << "���Ϊ��"<<c << endl;
	return 0;
}