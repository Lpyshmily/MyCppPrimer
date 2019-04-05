#include <iostream>
#include <forward_list>
#include <string>
using std::string;
using std::forward_list;
void search_and_insert(forward_list<string> &sflist, const string &str1, const string str2)
{
	auto iter = sflist.begin();
	auto prev = sflist.before_begin();
	int count = 0;
	while (iter != sflist.end())
	{
		if (*iter == str1)
		{
			iter = sflist.insert_after(iter, str2);
			++count;
		}
		++iter;
		++prev;
	}
	if (count == 0)
		sflist.insert_after(prev, str2);
}

int main()
{
	forward_list<string> list_int{"rng", "ig", "edg", "skt", "ig"};
	search_and_insert(list_int, "ig", "champion");
	for (auto &item : list_int)
		std::cout << item << ",";
	std::cout << "\b.\n";
	return 0;
}