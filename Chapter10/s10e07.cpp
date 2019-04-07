#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::vector;
using std::list;

template<typename Sequence>
void print(const Sequence &seq)
{
	for (auto &item : seq)
		std::cout << item << ",";
	std::cout << "\b.\n";
}

int main()
{
	// (a)
	vector<int> vec;
	list<int> lst;
	int i;
	while (std::cin >> i)
		lst.push_back(i);
	copy(lst.cbegin(), lst.cend(), back_inserter(vec));

	// (b)
	vector<int> v;
	v.resize(10);
	fill_n(v.begin(), 10, 0);

	print(vec);
	print(v);
	return 0;
}