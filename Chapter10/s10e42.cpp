#include <iostream>
#include <string>
#include <list>
using std::string;
using std::list;
void elim_list_dups(list<string> &lst)
{
	lst.sort();
	lst.unique();
}
int main()
{
	list<string> str_lst{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	elim_list_dups(str_lst);
	for (auto &item : str_lst)
		std::cout << item << ",";
	std::cout << "\b.\n";
	return 0;
}