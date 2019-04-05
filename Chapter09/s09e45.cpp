#include <iostream>
#include <string>
using std::string;
string add_info(string name, const string &pre, const string &back)
{
	name.insert(name.begin(), pre.begin(), pre.end());
	name.append(back);
	return name;
}
int main()
{
	string str = "Jackson";
	string new_str = add_info(str, "Mrs.", " Doctor");
	std::cout << new_str << std::endl;
	return 0;
}