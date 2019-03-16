// 使用递减操作符在循环中按递减顺序打印出10到0之间的整数
#include <iostream>
int main()
{
	int val = 10;
	while (val>=0)
		std::cout << val-- << std::endl;
	return 0;
}