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
	Sales_data Mydata1, Mydata2;
	double price;
	std::cin >> Mydata1.Bookno >> Mydata1.num >> price;
	Mydata1.sum = Mydata1.num * price;
	std::cin >> Mydata2.Bookno >> Mydata2.num >> price;
	Mydata2.sum = Mydata2.num * price;
	if (Mydata1.Bookno == Mydata2.Bookno)
		std::cout << Mydata1.Bookno << " " << Mydata1.num + Mydata2.num << " " << Mydata1.sum + Mydata2.sum << std::endl;
	else
		std::cerr << "Different Bookno!\n";
	return 0;
}