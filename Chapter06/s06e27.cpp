#include <iostream>
#include <initializer_list>
int sum(std::initializer_list<int> items)
{
	int result = 0;
	for (auto &item : items)
		result += item;
	return result;
}
int main()
{
	std::cout << sum({1, 3, 8}) << std::endl;
	return 0;
}