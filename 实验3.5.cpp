#include<iostream>
using namespace std;
int peach(int day)
{
	if (day == 10)
	{
		return 1;
	}
	return (peach(day + 1) + 1) * 2;
}
int main()
{
	cout << "��һ����ӹ�ժ��" << peach(1) <<"�����ӡ�" << endl;
	return 0;
}

