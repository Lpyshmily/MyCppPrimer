#include <iostream>
#include <map>
#include <string>
using std::string;
using std::map;
int main()
{
	map<string, int> word_count;
	string word;
	while (std::cin.peek() != '\n' && std::cin >> word)
		++word_count[word];
	for (auto &item : word_count)
		std::cout << item.first << " occurs " << item.second << ((item.second > 1) ? " times" : " time") << std::endl;
	return 0;
}