#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
int main()
{
	vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
	fill_n(vec.begin(), vec.size(), 0);
	for (auto item : vec)
		std::cout << item << std::endl;
	return 0;
}