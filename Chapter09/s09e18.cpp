#include <iostream>
#include <deque>
#include <string>
using std::deque;
using std::string;
int main()
{
	deque<string> str_deque;
	string str;
	while (std::cin >> str)
		str_deque.push_back(str);
	for (auto iter = str_deque.cbegin(); iter != str_deque.cend(); ++iter)
		std::cout << *iter << std::endl;
	return 0;
}