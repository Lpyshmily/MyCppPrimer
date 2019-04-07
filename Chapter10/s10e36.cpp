#include <iostream>
#include <list>
#include <algorithm>
using std::list;
int main()
{
	list<int> lst{1, 0, 3, 0, 0, 5, 7};
	auto iter = find(lst.crbegin(), lst.crend(), 0);
	for (;iter != lst.crend(); ++iter)
		std::cout << *iter << ",";
	std::cout << "\b.\n";
	return 0;
}