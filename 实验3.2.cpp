#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1)
	{
		return false;
	}
	if (num == 2)
	{
		return true;
	}
	if (num % 2 == 0)
		return false;
	for (int i = 3; i <= sqrt(num); i += 2)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}


int main()
{

	int count = 0;
	int num = 2;
	cout << "前200个素数如下：" << endl;
	while (count < 200) {
		if (is_prime(num)) {
			cout << setw(6) << num;
			count++;

			if (count % 10 == 0)
				cout << endl;
		}

		num++;
	}


	int a=0;
	cout << "请输入一个整数" << endl;
	cin >>a;
	if (is_prime(a))
	{
		cout << "该数为素数" << endl;
	}
	else {
		cout << "该数不是素数" << endl;
	}
	


	return 0;
}
