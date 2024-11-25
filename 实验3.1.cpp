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
	cout << "请分别输入两个正整数" << endl;
	cin>>m>>n;
	
	cout << "它们的最大公约数是："<< gcd(m,n)<< endl;
	cout << "它们的最小公倍数是："<< lcm(m,n)<< endl;
	return 0;
}