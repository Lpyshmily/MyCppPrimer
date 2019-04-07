#include <iostream>
#include <fstream>
#include <iterator>
using std::ifstream;
using std::ofstream;
using std::istream_iterator;
using std::ostream_iterator;
int main(int argc, char **argv)
{
	ifstream in_file(argv[1]);
	ofstream out_file_odd(argv[2]);
	ofstream out_file_even(argv[3]);

	istream_iterator<int> in_iter(in_file), eof;
	ostream_iterator<int> out_iter_odd(out_file_odd, " ");
	ostream_iterator<int> out_iter_even(out_file_even, "\n");

	while (in_iter != eof)
	{
		if (*in_iter % 2)
			out_iter_odd = *in_iter;
		else
			out_iter_even = *in_iter;
		++in_iter;
	}
}