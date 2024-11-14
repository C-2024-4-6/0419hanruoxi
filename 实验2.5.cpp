#include <iostream>
#include<string>
int main()
{
	std::string line; //字符串
	int letter = 0;
	int space = 0;
	int number = 0;
	int other = 0;

	std::getline(std::cin, line); //使用getline 读取字符，并储存到字符串line中.
	for (char c : line) //增强型的for循环语句，用于遍历字符串line中的每一个字符c。
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
	std::cout << "英文字母个数: " << letter << std::endl;
	std::cout << "空格个数: " << space << std::endl;
	std::cout << "数字字符个数: " << number << std::endl;
	std::cout << "其他字符个数: " << other << std::endl;

}