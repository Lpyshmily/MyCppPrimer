#include <iostream>
int main()
{
	int a = 2, b = 3;
	auto f = [a] (int num) {return a + num;};
	std::cout << f(b) << std::endl;
	return 0;
}