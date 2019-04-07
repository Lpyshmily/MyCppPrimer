#include <iostream>
#include <vector>
using std::vector;
int main()
{
	vector<int> vec{1, 4, 7, 5, 8};
	auto iter = vec.end();
	while (1)
	{
		--iter;
		std::cout << *iter << ",";
		if (iter == vec.cbegin())
			break;
	}
	std::cout << "\b.\n";
	return 0;
}