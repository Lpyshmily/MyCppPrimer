#include <iostream>
#include <vector>
using Iter = std::vector<int>::iterator;
void my_print(Iter a, Iter b)
{
	if (a != b)
	{
		std::cout << *a << ",";
		my_print(++a, b);
	}
	else
		std::cout << "\b.\n";
}
int main()
{
	std::vector<int> vec{1, 3, 5, 6};
	my_print(vec.begin(), vec.end());
	return 0;
}