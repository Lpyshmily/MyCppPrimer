#include <iostream>
#include <map>
#include <string>
#include <vector>
using std::string;
using std::map;
using std::vector;
int main()
{
	map<string, vector<string>> name;
	string fname, lname;
	while (std::cin >> fname >> lname)
		name[lname].push_back(fname);

	for (auto &item : name)
	{
		std::cout << item.first << ":";
		for (auto &i : item.second)
			std::cout << i << ",";
		std::cout << "\b.\n";
	}
	return 0;
}