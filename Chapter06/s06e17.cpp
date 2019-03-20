#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;

bool have_upper(const string &str_ref)
{
	for (auto ch : str_ref)
	{
		if (isupper(ch))
			return true;
	}
	return false;
}

void to_lower(string &str_ref)
{
	for (auto &ch : str_ref)
	{
		if (isupper(ch))
			ch = tolower(ch);
	}
}

int main()
{
	string str("MyAcline");
	cout << have_upper(str) << endl;
	to_lower(str);
	cout << str << endl;
	return 0;
}