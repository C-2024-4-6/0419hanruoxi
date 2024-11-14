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
	cout << "请分别输入两个正整数" << endl;
	cin>>a>>b;
	
	cout << "它们的最大公约数是："<< gcd(a,b)<< endl;
	cout << "它们的最小公倍数是："<< lcm(a,b)<< endl;
	return 0;
}