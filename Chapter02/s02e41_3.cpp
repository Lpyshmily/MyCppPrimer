#include <iostream>
#include <string>
struct Sales_data
{
	std::string Bookno;
	unsigned num = 0;
	double sum = 0.0;
};

int main()
{
	Sales_data sep_data, sum_data;
	double price;
	if (std::cin >> sum_data.Bookno >> sum_data.num >> price)
	{
		sum_data.sum = sum_data.num * price;
		while (std::cin >> sep_data.Bookno >> sep_data.num >> price)
		{
			if (sep_data.Bookno == sum_data.Bookno)
			{
				sum_data.num += sep_data.num;
				sum_data.sum += sep_data.num * price;
			}
			else
			{
				std::cout << "Different Bookno!\n";
				std::cout << sum_data.Bookno << " " << sum_data.num << " " << sum_data.sum << std::endl;
				sum_data.Bookno = sep_data.Bookno;
				sum_data.num = sep_data.num;
				sum_data.sum = sep_data.num * price;
			}
		}
		std::cout << sum_data.Bookno << " " << sum_data.num << " " << sum_data.sum << std::endl;
		return 0;
	}
	else
	{
		std::cout << "No data?\n";
		return -1;
	}
}