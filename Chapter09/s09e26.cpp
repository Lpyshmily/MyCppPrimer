#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using std::list;
using std::vector;
int main()
{
	int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	list<int> list_int(std::begin(ia), std::end(ia));
	vector<int> vec_int(std::begin(ia), std::end(ia));

	auto iter = list_int.begin();
	while (iter != list_int.end())
		if (*iter % 2)
			iter = list_int.erase(iter);
		else
			++iter;

	auto it = vec_int.begin();
	while (it != vec_int.end())
		if (!(*it % 2))
			it = vec_int.erase(it);
		else
			++it;

	for (auto item : list_int)
		std::cout << item << ",";
	std::cout << "\b.\n";
	for (auto item : vec_int)
		std::cout << item << ",";
	std::cout << "\b.\n";
	return 0;
}