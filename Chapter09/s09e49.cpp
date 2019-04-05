#include <iostream>
#include <fstream>
#include <string>
using std::string;
int main()
{
	std::ifstream in_file("../data/letter.txt");
	string str_test;
	string middle_list("acemnorsuvwxz");
	string longest;
	while (in_file >> str_test)
		if (str_test.find_first_not_of(middle_list) == string::npos)
			if (str_test.size() > longest.size())
				longest = str_test;

	std::cout << longest << std::endl;
	return 0;
}