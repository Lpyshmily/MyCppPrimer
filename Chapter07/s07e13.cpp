#include "s07e21.h"
int main()
{
	std::istream &my_is = std::cin;
	Sales_data total(my_is);
	if (my_is)
	{
		Sales_data trans;
		while (read(std::cin, trans))
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
	return 0;
}