#include <iostream>
#include <string>
using std::string;
int main()
{
	string alpha_list("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string str("ab2c3d7R4E6");
	string::size_type pos = 0;
	while ((pos = str.find_first_of(alpha_list, pos)) != string::npos)
	{
		std::cout << str[pos] << ",";
		++pos;
	}
	return 0;
}