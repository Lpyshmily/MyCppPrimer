#include <iostream>
#include <sstream>
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
int main()
{
	std::string my_str("std c++ 11");
	std::istringstream istr(my_str);
	my_func(istr);
	return 0;
}