#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using std::cin;
int main()
{
	vector<int> vec;
	int num;
	while (cin.peek() != '\n' && cin >> num)
		vec.push_back(num);
	int num_count = count(vec.cbegin(), vec.cend(), 25);
	std::cout << num_count << std::endl;
	return 0;
}