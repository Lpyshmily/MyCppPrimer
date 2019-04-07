#include <iostream>
#include <vector>
int main()
{
	std::vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto iter = vec.crbegin();
	for (int i = 9 - 7; i <= 9 - 3; ++i)
		std::cout << *(iter + i) << ",";
	std::cout << "\b.\n";
	return 0;
}