#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::string;
using std::vector;

bool judge_5(const string &str)
{
	return str.size() >= 5;
}

int main()
{
	vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	auto iter = partition(vec.begin(), vec.end(), judge_5);
	for (auto i = vec.begin(); i != iter; ++i)
		std::cout << *i << std::endl;
	return 0;
}