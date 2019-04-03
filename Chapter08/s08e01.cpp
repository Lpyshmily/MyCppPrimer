#include <iostream>
#include <string>
using std::istream;
istream &my_func(istream &is)
{
	std::string num;
	while(is >> num)
		std::cout << num << std::endl;
	is.clear();
	return is;
}