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
	{
		auto ret = word_count.insert({word, 1});
		if (!ret.second)
			++(ret.first->second);
	}
	for (auto &item : word_count)
		std::cout << item.first << " occurs " << item.second << ((item.second > 1) ? " times" : " time") << std::endl;
	return 0;
}