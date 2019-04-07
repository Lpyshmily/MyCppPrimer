#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::vector;
using std::string;

void print(const vector<string> &v)
{
	for (auto &item : v)
		std::cout << item << ",";
	std::cout << "\b.\n";
}

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	print(words);
	auto end_unique = unique(words.begin(), words.end());
	print(words);
	words.erase(end_unique, words.end());
	print(words);
}

int main()
{
	vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	elimDups(vec);
	return 0;
}