#include <iostream>
#include <vector>
using std::vector;
using std::cout;
int main()
{
	vector<int> vec{1, 4, 2, 7, 5, 8};
	for (auto &item : vec)
		item = item % 2 ? item*2 : item;
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << " ";
	cout << "\b.\n";
	return 0;
}