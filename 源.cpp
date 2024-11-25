#include <iostream>
#include"mytemperature.h"
using namespace std;

int main()
{
	double a = 0.0, b = 0.0;
	cout << "请输入一个摄氏温度" << endl;
	cin>> a;
	cout << "转化为华氏温度为：" << celsius_to_fah(a) << endl;

	cout << "请输入一个华氏温度" << endl;
	cin >> b;
	cout << "转化为摄氏温度为：" << fah_to_celsius(b) << endl;


	return 0;
}