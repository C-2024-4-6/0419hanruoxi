#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
int main()
{
	int a = 0, b = 0;
	cout << "��ֱ���������������" << endl;
	cin>>a>>b;
	
	cout << "���ǵ����Լ���ǣ�"<< gcd(a,b)<< endl;
	cout << "���ǵ���С�������ǣ�"<< lcm(a,b)<< endl;
	return 0;
}