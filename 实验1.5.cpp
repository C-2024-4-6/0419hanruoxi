#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    float hua, she;
    cout << "�����뻪���¶ȣ�" << endl;
    cin >> hua;
    she = (hua - 32) * 5 / 9;
    cout.setf(ios::fixed);
    cout << "ת���������¶�Ϊ��" << setprecision(2) << she << endl;
    return 0;
}