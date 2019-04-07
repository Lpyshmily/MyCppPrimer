#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::vector;
using std::string;

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

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	auto wc = stable_partition(words.begin(), words.end(), [sz] (const string &str) {return str.size() < sz;});
	auto count = count_if(words.begin(), words.end(), [=] (const string &str) {return str.size() >= sz;});
	std::cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << std::endl;
	for_each(wc, words.end(),
		[] (const string &str) {std::cout << str << " ";});
	std::cout << "\b.\n";
}

int main()
{
	vector<string> vec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	biggies(vec, 5);
	return 0;
}