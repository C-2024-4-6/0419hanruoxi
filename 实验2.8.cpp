#include <iostream>
#include <cmath>
int main()
{
	double a, x = 1.0, x_next = 1.0;
	std::cout << "请输入一个数 " << std::endl;
	std::cin >> a;
	if (a == 0)
	{
		std::cout << "0的平方根为0" << std::endl;
	}
	else
	{

		while (1)
		{
			x_next = 0.5 * (x + a / x);
			if (std::abs(x_next - x) < 1e-5)
			{
				break;
			}
			x = x_next;
		}
		std::cout << a << "的平方根是" << x_next << std::endl;
	}
		return 0; 
}