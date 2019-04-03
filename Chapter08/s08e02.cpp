// compile with s08e01.cpp

#include <iostream>
using std::istream;
istream &my_func(istream &is);
int main()
{
	istream &is = my_func(std::cin);
	std::cout << is.rdstate() << std::endl;
	return 0;
}