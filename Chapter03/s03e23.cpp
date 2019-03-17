#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec(10, 4);
	for (auto it = vec.begin(); it != vec.end(); it++)
	{
		*it *= 2;
		cout << *it << ",";
	}
	cout << "\b.\n";
	return 0;
}