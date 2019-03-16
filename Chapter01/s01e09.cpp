// 编写一个程序，使用while循环将50到100的整数相加
#include <iostream>
int main()
{
	int sum = 0;
	int val = 50;
	while (val<=100)
	{
		sum += val;
		++val;
	}
	std::cout << "The sum from 50 to 100 is: " << sum << std::endl;
	return 0;
}