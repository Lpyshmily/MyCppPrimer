#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std::placeholders;
using std::string;

bool check_size(const string &str, string::size_type sz)
{
	return sz > str.size();
}

int main()
{
	std::vector<int> vec{1, 3, 5, 8, 13};
	string str_length("gfdhsj");
	auto bigger = find_if(vec.begin(), vec.end(), bind(check_size, str_length, _1));
	std::cout << *bigger << std::endl;
	return 0;
}