#include <iostream>
#include"mytemperature.h"
using namespace std;

int main()
{
	double a = 0.0, b = 0.0;
	cout << "������һ�������¶�" << endl;
	cin>> a;
	cout << "ת��Ϊ�����¶�Ϊ��" << celsius_to_fah(a) << endl;

	cout << "������һ�������¶�" << endl;
	cin >> b;
	cout << "ת��Ϊ�����¶�Ϊ��" << fah_to_celsius(b) << endl;


	return 0;
}