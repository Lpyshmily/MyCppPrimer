#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
int main()
{
	vector<char> vec_char{'a', 'f', 't', 'k'};
	string con_str(vec_char.begin(), vec_char.end());
	std::cout << con_str << std::endl;
	return 0;
}