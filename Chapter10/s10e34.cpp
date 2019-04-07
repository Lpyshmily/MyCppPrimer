#include <iostream>
#include <vector>
using std::vector;
int main()
{
	vector<int> vec{1, 4, 7, 5, 8};
	for (auto iter = vec.crbegin(); iter != vec.crend(); ++iter)
		std::cout << *iter << ",";
	std::cout << "\b.\n";
	return 0;
}