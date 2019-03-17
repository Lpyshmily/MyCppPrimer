#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> vec;
	string str;
	while (getline(cin, str))
		vec.push_back(str);
	for (auto it = vec.begin(); it != vec.end() && !(*it).empty(); it++)
	{
		for (auto i = (*it).begin(); i != (*it).end(); i++)
		{
			if (isalpha(*i))
				*i = toupper(*i);
		}
		cout << *it << endl;
	}
	return 0;
}