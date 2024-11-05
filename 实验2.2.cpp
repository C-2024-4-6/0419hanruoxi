#include<iostream>
using namespace std;
int main() {
	
	float x;
	cout << "请输入x:" << endl;
	cin >> x;
	
		if (x < 1 && x>0)
		{
			cout <<"y值为"<< 3 - 2 * x << endl;
		}
		else if (x >= 1 && x < 5)
		{
			cout << "y值为" << 2 / (4 * x) + 1 << endl;
		}
		else if (x >= 5 && x < 10)
		{
			cout << "y值为" << x * x << endl;
		}
		else
		{
			cout << "不在定义域内" << endl;
		}
		
	
	
	return 0;
}