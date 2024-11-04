#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    float hua, she;
    cout << "请输入华氏温度：" << endl;
    cin >> hua;
    she = (hua - 32) * 5 / 9;
    cout.setf(ios::fixed);
    cout << "转化成摄氏温度为：" << setprecision(2) << she << endl;
    return 0;
}