#include <iostream>
#include <string>
#include <map>
#include <set>
using std::string;
using std::map;
using std::multimap;
using std::set;

int main()
{
	multimap<string, string> authors{
		{ "alan", "DMA" },
        { "pezy", "LeetCode" },
        { "alan", "CLRS" },
        { "wang", "FTP" },
        { "pezy", "CP5" },
        { "wang", "CPP-Concurrency" }
	};
	map<string, set<string>> author_work;
	for (auto &item : authors)
		author_work[item.first].insert(item.second);

	for (auto &m : author_work)
	{
		std::cout << m.first << ":";
		for (auto &n : m.second)
			std::cout << n << ",";
		std::cout << "\b.\n";
	}

	return 0;
}