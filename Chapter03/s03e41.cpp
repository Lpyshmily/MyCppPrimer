#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int arr[5] = {1, 2, 3, 4};
	vector<int> vec(begin(arr), end(arr));
	for (auto item : vec)
		cout << item << " ";
	cout << "\b.\n";
	return 0;
}