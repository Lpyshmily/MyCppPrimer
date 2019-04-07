#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include "../Chapter01/Sales_item.h"

bool compare_isbn(const Sales_item &sd1, const Sales_item &sd2)
{
	return sd1.isbn().size() < sd2.isbn().size();
}

int main()
{
	std::ifstream in_file("../data/book.txt");
	std::istream_iterator<Sales_item> in_iter(in_file), eof;
	std::vector<Sales_item> vec(in_iter, eof);
	sort(vec.begin(), vec.end(), compare_isbn);
	auto beg = vec.begin(), end = beg;
	while (beg != vec.end())
	{
		end = find_if(beg, vec.end(), [beg](const Sales_item &item) {return item.isbn() != beg->isbn();});
		std::cout << accumulate(beg, end, Sales_item(beg->isbn())) << std::endl;
		beg = end;
	}
	return 0;
}