#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
	vector<int> vec(10, 2);
	auto size = vec.size();
	int arr[size];
	for (decltype(size) i = 0; i < size; i++)
		arr[i] = vec[i];
	for (auto item : arr)
		cout << item << " ";
	cout << "\b.\n";
	return 0;
}