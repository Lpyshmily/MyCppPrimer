// 提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数，假设包括左右两端的值
#include <iostream>
int main()
{
	int n1, n2, temp;
	std::cout << "Please enter two number:";
	std::cin >> n1 >> n2;
	// 确保n1小于等于n2
	if (n1>n2)
	{
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	temp = n1;
	while (temp<=n2)
		std::cout << temp++ << " ";
	return 0;
}