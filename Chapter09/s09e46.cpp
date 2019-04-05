#include <iostream>
#include <string>
using std::string;
string add_info(string name, const string &pre, const string &back)
{
	name.insert(0, pre);
	name.insert(name.size(), back);
	return name;
}
int main()
{
	string str = "Jackson";
	string new_str = add_info(str, "Mrs.", " Doctor");
	std::cout << new_str << std::endl;
	return 0;
}