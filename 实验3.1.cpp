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
	int m = 0, n = 0;
	cout << "��ֱ���������������" << endl;
	cin>>m>>n;
	
	cout << "���ǵ����Լ���ǣ�"<< gcd(m,n)<< endl;
	cout << "���ǵ���С�������ǣ�"<< lcm(m,n)<< endl;
	return 0;
}