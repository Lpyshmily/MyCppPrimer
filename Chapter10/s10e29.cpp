#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
using std::string;
using std::vector;
int main()
{
	std::ifstream in_file("../data/book.txt");
	std::istream_iterator<string> in_iter(in_file), eof;
	vector<string> vec(in_iter, eof);
	std::ostream_iterator<string> out_iter(std::cout, "\n");
	for (auto &item : vec)
		out_iter = item;
	return 0;
}