#include <iostream>
using namespace std;
class V
{
public:
	void set_value()
	{
		cout << "��ֱ����볤����ĳ������ߣ�";
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void count_display()
	{
		cout << "�ó���������Ϊ��" << length * width * height << endl;
	}
private:
	int length;
	int width;
	int height;
};
int main()
{
	V V1,V2, V3;
	V1.set_value();
	V1.count_display();
	V2.set_value();
	V2.count_display();
	V3.set_value();
	V3.count_display();
	return 0;
}