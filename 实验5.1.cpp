#include<iostream>
using namespace std;
class Time             // ����Time��
{
public:
	void set_time()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void show_time()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:            
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t;         //����t1ΪTime�����
	t.set_time();
	t.show_time();
	return 0;
}