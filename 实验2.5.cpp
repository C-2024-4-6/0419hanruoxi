#include <iostream>
#include<string>
int main()
{
	std::string line; //�ַ���
	int letter = 0;
	int space = 0;
	int number = 0;
	int other = 0;

	std::getline(std::cin, line); //ʹ��getline ��ȡ�ַ��������浽�ַ���line��.
	for (char c : line) //��ǿ�͵�forѭ����䣬���ڱ����ַ���line�е�ÿһ���ַ�c��
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			letter++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			number++;
		}
		else
		{
			other++;
		}
	}
	std::cout << "Ӣ����ĸ����: " << letter << std::endl;
	std::cout << "�ո����: " << space << std::endl;
	std::cout << "�����ַ�����: " << number << std::endl;
	std::cout << "�����ַ�����: " << other << std::endl;

}