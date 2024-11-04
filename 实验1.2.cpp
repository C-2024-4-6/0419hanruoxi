#include<iostream>
using namespace std;
int main()
{
    const float pi = 3.14;
    int a = 0;
    cout << "ÇëÊäÈëÔ²×¶µ×µÄ°ë¾¶£º" << endl;
    cin >> a;
    int h = 0;
    cout << "ÇëÊäÈëÔ²×¶¸ß£º" << endl;
    cin >> h;
    float V = (a * a * pi) * h / 3;
    cout << "Ô²×¶µÄÌå»ýÊÇ£º" << V << endl;
    return 0;
}