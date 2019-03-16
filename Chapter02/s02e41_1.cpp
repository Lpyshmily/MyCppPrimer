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
	Sales_data Mydata;
	double price;
	while (std::cin >> Mydata.Bookno >> Mydata.num >> price)
	{
		Mydata.sum = Mydata.num * price;
		std::cout << Mydata.Bookno << " " << Mydata.num << " " << Mydata.sum << std::endl;
	}
	return 0;
}