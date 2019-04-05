#include <iostream>
#include <list>
#include <deque>
using std::list;
using std::deque;
int main()
{
	list<int> list_int{1, 2, 3, 4, 5, 6, 7, 8};
	deque<int> de_odd, de_even;
	for (auto iter = list_int.cbegin(); iter != list_int.cend(); ++iter)
	{
		if (*iter % 2)
			de_odd.push_back(*iter);
		else
			de_even.push_back(*iter);
	}
	for (auto iter = de_odd.cbegin(); iter != de_odd.cend(); ++iter)
		std::cout << *iter << " ";
	std::cout << "\b.\n";
	for (auto iter = de_even.cbegin(); iter != de_even.cend(); ++iter)
		std::cout << *iter << " ";
	return 0;
}