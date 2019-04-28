#include <iostream>
#include <map>
#include <string>
#include <vector>
using std::string;
using std::map;
using std::vector;
using std::pair;
int main()
{
	map<string, vector<pair<string, string>>> name;
	string fname, lname, birth;
	while (std::cin >> fname >> lname >> birth)
		name[lname].push_back({fname, birth});

	for (auto &item : name)
	{
		std::cout << item.first << ":";
		for (auto &i : item.second)
			std::cout << i.first << i.second << ",";
		std::cout << "\b.\n";
	}
	return 0;
}