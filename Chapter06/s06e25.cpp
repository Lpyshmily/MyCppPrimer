#include <iostream>
#include <string>
using std::string;
int main(int argc, char** argv)
{
	string str;
	for (int i = 1; i != argc; ++i)
		str = str + argv[i] + " ";
	std::cout << str << std::endl;
	return 0; 
}