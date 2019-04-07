#include <iostream>
#include "../Chapter07/s07e26.h"
#include <vector>
#include <algorithm>
using std::vector;

int main()
{
    Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("abaz");
	vector<Sales_data> vec{d1, d2, d3, d4, d5};
	stable_sort(vec.begin(), vec.end(), [] (const Sales_data &sd1, const Sales_data &sd2) {return sd1.isbn().size() < sd2.isbn().size();});
	for (auto &item : vec)
		std::cout << item.isbn() << ",";
	std::cout << "\b.\n";
	return 0;
}