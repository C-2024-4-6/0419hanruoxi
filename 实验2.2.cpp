#include<iostream>
using namespace std;
int main() {
	
	float x;
	cout << "������x:" << endl;
	cin >> x;
	
		if (x < 1 && x>0)
		{
			cout <<"yֵΪ"<< 3 - 2 * x << endl;
		}
		else if (x >= 1 && x < 5)
		{
			cout << "yֵΪ" << 2 / (4 * x) + 1 << endl;
		}
		else if (x >= 5 && x < 10)
		{
			cout << "yֵΪ" << x * x << endl;
		}
		else
		{
			cout << "���ڶ�������" << endl;
		}
		
	
	
	return 0;
}