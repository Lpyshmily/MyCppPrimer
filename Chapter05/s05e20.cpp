#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
int main()
{
	string pre_str, str;
	bool flag = false;
	while(cin >> str)
	{
		if (str == pre_str)
		{
			cout << str << " occurs two times.\n";
			flag = true;
			break;
		}
		pre_str = str;
	}
	if (!flag)
		cout << "No!\n";
	return 0;
}