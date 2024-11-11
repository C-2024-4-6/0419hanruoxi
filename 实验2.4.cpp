#include<iostream>
using namespace std;
int main() {
	double a, b;
	char op;
	double c=0.0;
	cout <<"请输入第一个数：" << endl;
	cin >> a;
	
	cout << "请输入运算符(+、-、*、/、%)：" << endl;
	cin >> op;

	cout << "请输入第二个数：" << endl;
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
				cout << "除数不能为0" << endl;
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
				cout << "出错" << endl;
				result = false;
			}
			else
			{
				c = static_cast<int>( a) % static_cast<int>(b);
			}
			break;
		default:
			cout << "运算符非法" << endl;
			result = false;
			break;
	}
	if (result)
		cout << "结果为："<<c << endl;
	return 0;
}