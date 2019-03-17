#include <iostream>
#include <string>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::string;
	string str1, str2;
	cin >> str1 >> str2;
	if (str1.size() == str2.size())
		cout << "Same!\n";
	else
		cout << (str1.size() > str2.size() ? str1 : str2) << endl;
	return 0;
}