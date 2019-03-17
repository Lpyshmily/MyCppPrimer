#include <iostream>
#include <string>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	std::string str1, str2;
	cin >> str1 >> str2;
	if (str1 == str2)
		cout << "Same!\n";
	else
		cout << (str1 > str2 ? str1 : str2) << endl;
	return 0;
}