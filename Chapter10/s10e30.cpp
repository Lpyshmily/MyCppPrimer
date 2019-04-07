#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using std::vector;
int main()
{
	std::istream_iterator<int> in_iter(std::cin), eof;
	vector<int> vec(in_iter, eof);
	sort(vec.begin(), vec.end());

	std::ostream_iterator<int> out_iter(std::cout, ",");
	copy(vec.begin(), vec.end(), out_iter);

	return 0;
}