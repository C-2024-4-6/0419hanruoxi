#include <iostream>
int main()
{
	const double price = 0.8;
	int apple = 2, total = 2;
	double cost = price * apple;
	while (total + apple * 2 <= 100)
	{
		apple *= 2;
		total += apple;
		cost += price * apple;
	}
	int days = 0;
	int tempApples = apple;
	while (tempApples >0) {
		tempApples /= 2;
		days++;
	}
	double averageCostPerDay = cost / (days-1);

	std::cout << "每天平均花费: " << averageCostPerDay << " 元" << std::endl;
		return 0; 
}