#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
	vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	for (auto item : vec)
		cout << item << ",";
	cout << "\b.\n";
	return 0;
}