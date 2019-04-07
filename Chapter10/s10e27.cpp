#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using std::list;
using std::vector;

void print(list<int> &list_int)
{
	for (auto item : list_int)
		std::cout << item << ",";
	std::cout << "\b.\n";
}

int main()
{
	vector<int> vec{1, 2, 2, 3, 3, 3, 5, 6, 6};
	list<int> lst1, lst2, lst3;
	unique_copy(vec.begin(), vec.end(), back_inserter(lst1));
	unique_copy(vec.begin(), vec.end(), front_inserter(lst2));
	unique_copy(vec.begin(), vec.end(), inserter(lst3, lst3.begin()));
	print(lst1);
	print(lst2);
	print(lst3);
	return 0;
}