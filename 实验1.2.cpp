#include<iostream>
using namespace std;
int main()
{
    const float pi = 3.14;
    int a = 0;
    cout << "������Բ׶�׵İ뾶��" << endl;
    cin >> a;
    int h = 0;
    cout << "������Բ׶�ߣ�" << endl;
    cin >> h;
    float V = (a * a * pi) * h / 3;
    cout << "Բ׶������ǣ�" << V << endl;
    return 0;
}