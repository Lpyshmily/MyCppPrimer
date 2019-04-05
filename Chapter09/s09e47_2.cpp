#include <iostream>
#include <string>
using std::string;
int main()
{
	// string alpha_list("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string num_list("0123456789");
	string str("ab2c3d7R4E6");
	string::size_type pos = 0;
	while ((pos = str.find_first_not_of(num_list, pos)) != string::npos)
	{
		std::cout << str[pos] << ",";
		++pos;
	}
	return 0;
}