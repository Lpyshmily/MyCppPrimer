#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str;
	getline(cin, str);
	for (auto &ch : str)
	{
		if (!ispunct(ch))
			cout << ch;
	}
	cout << endl;
	return 0;
}