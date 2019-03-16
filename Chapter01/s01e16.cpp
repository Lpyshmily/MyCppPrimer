// 从cin读取一组数，输出其和
#include <iostream>
int main()
{
	int sum = 0;
	int val;
	while (std::cin >> val)
		sum += val;
	std::cout << "The sum is " << sum << std::endl;
	return 0;
}