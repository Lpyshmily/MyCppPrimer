#include "s08e06.h"
#include <iostream>
#include <fstream>
int main(int argc, char **argv)
{
	std::ifstream in_file(argv[1]);
	Sales_data total;
	if (read(in_file, total))
	{
		Sales_data trans;
		while (read(in_file, trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(std::cout, total) << std::endl;
				total = trans;
			}
		}
		print(std::cout, total) << std::endl;
	}
	else
		std::cerr << "No data?!\n";
	in_file.close();
	return 0;
}