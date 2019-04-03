#include "s07e41.h"
#include <iostream>
// member functions
Sales_data::Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n)
{
	std::cout << "Sales_data(const std::string &s, unsigned n, double p)\n";
}

Sales_data::Sales_data() : Sales_data("", 0, 0.0)
{
	std::cout << "Sales_data()\n";
}

Sales_data::Sales_data(const std::string &s) : Sales_data(s, 0, 0.0)
{
	std::cout << "Sales_data(const std::string &s)\n";
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this);
	std::cout << "Sales_data(std::istream &)\n";
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

// nonmember functions
std::istream &read(std::istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue;
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}