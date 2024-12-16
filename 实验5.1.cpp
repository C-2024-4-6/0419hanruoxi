#include<iostream>
using namespace std;
class Time             // 定义Time类
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
	Time t;         //定义t1为Time类对象
	t.set_time();
	t.show_time();
	return 0;
}