#include <iostream>
#include <vector>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> Myvector;
	string str;
	while (cin >> str)
		Myvector.push_back(str);
	for (auto &item : Myvector)
	{
		for (auto &ch : item)
			ch = toupper(ch);
		cout << item << endl;
	}
	return 0;
}