#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <algorithm>
using std::string;
using std::map;

void process_str(string &str)
{
	for (auto &i : str)
		i = tolower(i); // change each letter to lower

	// delete puctuation
	str.erase(find_if(str.begin(), str.end(), ispunct), str.end());
}

int main()
{
	map<string, int> word_count;
	string word;
	while (std::cin.peek() != '\n' && std::cin >> word)
	{
		process_str(word);
		++word_count[word];
	}
	for (auto &item : word_count)
		std::cout << item.first << " occurs " << item.second << ((item.second > 1) ? " times" : " time") << std::endl;
	return 0;
}