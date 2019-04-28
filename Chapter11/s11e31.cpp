#include <iostream>
#include <map>
#include <set>
#include <string>
using std::string;
using std::multimap;
using std::map;
using std::set;

void print(multimap<string, string> &mmap)
{
	for (auto &item : mmap)
		std::cout << item.first << ":" << item.second << std::endl;
	std::cout << std::endl;
}

int main()
{
	// another meaning
	multimap<string, string> entries{{"A", "aaaa"}, {"B", "bbbb"}, {"B", "BBBB"}, {"C", "cccc"}};
	auto iter = entries.find("A");
	if (iter != entries.end())
		entries.erase(iter);
	print(entries);
	auto it = entries.equal_range("B");
	if (it.first != it.second)
		entries.erase(it.first, it.second);
	print(entries);
	it = entries.equal_range("D");
	if (it.first != it.second)
		entries.erase(it.first, it.second);
	print(entries);

	//right meaning
	multimap<string, string> authors{
		{ "alan", "DMA" },
        { "pezy", "LeetCode" },
        { "alan", "CLRS" },
        { "wang", "FTP" },
        { "pezy", "CP5" },
        { "wang", "CPP-Concurrency" }
	};
	print(authors);
	auto find_result = authors.find("pezy");
	auto num = authors.count("pezy");
	while (num)
	{
		if (find_result->second == "CP5")
			authors.erase(find_result);
		++find_result;
		--num;
	}
	print(authors);
	return 0;
}