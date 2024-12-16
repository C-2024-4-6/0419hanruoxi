#include <iostream>
using namespace std;
class Point
{
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void set_point(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
private:
	int x;
	int y;
};
	int main() 
	{
		Point p; 
		p.display();  
		p.set_point(04, 19);  
		p.display();  
		return 0;
	}