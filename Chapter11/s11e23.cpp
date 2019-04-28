#include <iostream>
#include <map>
#include <string>
using std::string;
using std::multimap;
int main()
{
	multimap<string, string> name;
	string fname, lname;
	while (std::cin >> fname >> lname)
		name.emplace(lname, fname);

	for (auto &item : name)
		std::cout << item.first << ":" << item.second << std::endl;
	return 0;
}