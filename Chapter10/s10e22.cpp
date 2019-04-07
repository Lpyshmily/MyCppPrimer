#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using std::vector;
using std::string;
using namespace std::placeholders;

string make_plural(int num, const string &str, const string &add)
{
	return num > 1 ? str + add : str;
}

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

bool check_size(const string &str, string::size_type sz)
{
	return str.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	stable_sort(words.begin(), words.end(), [] (const string &a, const string &b) {return a.size() < b.size();});
	auto wc = find_if(words.begin(), words.end(), bind(check_size, _1, sz));
	for_each(wc, words.end(), [] (const string &str) {std::cout << str << " ";});
	std::cout << "\b.\n";
}

int main()
{
	vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	biggies(vec, 5);
	return 0;
}