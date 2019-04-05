#include <iostream>
#include <string>
using std::string;

void old_to_new(string &s, const string &oldVal, const string &newVal)
{
	auto size_find = oldVal.size();
	auto size_insert = newVal.size();
	int i = 0;
	while (i != s.size())
	{
		string temp(s, i, size_find);
		if (temp == oldVal)
		{
			s.erase(i, size_find);
			s.insert(i, newVal);
			i = i + size_insert;
		}
		else
			++i;
	}
}

int main()
{
	string str = "sathoaythrutho";
	old_to_new(str, "tho", "though");
	std::cout << str << std::endl;
	return 0;
}