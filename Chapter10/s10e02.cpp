#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using std::list;
using std::string;
using std::cin;
int main()
{
	list<string> list_str;
	string str;
	while (cin.peek() != '\n' && cin >> str)
		list_str.push_back(str);
	int num_count = count(list_str.cbegin(), list_str.cend(), "skt");
	std::cout << num_count << std::endl;
	return 0;
}