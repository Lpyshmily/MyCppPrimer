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
	vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> lst1, lst2, lst3;
	copy(vec.begin(), vec.end(), back_inserter(lst1));
	copy(vec.begin(), vec.end(), front_inserter(lst2));
	copy(vec.begin(), vec.end(), inserter(lst3, lst3.begin()));
	print(lst1);
	print(lst2);
	print(lst3);
	return 0;
}