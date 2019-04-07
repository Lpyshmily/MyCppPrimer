#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
int main()
{
	vector<int> vec{1, 2, 3, 5, 8};
	int sum = accumulate(vec.cbegin(), vec.cend(), 0);
	std::cout << sum << std::endl;
	return 0;
}