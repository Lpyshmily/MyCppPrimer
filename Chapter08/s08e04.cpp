#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::string;
using std::vector;

void read_file_to_vec(const string &filename, vector<string> &vec)
{
	std::ifstream in_file(filename);
	string str;
	while (getline(in_file, str))
		vec.push_back(str);
}

int main()
{
	vector<string> new_vec;
	read_file_to_vec("../data/book.txt", new_vec);
	for (auto &item : new_vec)
		std::cout << item << std::endl;
	return 0;
}