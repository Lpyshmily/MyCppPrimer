#ifndef S07E41_H_
#define S07E41_H_

#include <iostream>
#include <string>

class Sales_data
{
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double avg_price()const;
public:
	Sales_data(const std::string &s, unsigned n, double p);
	Sales_data();
	Sales_data(const std::string &s);
	Sales_data(std::istream &);

	std::string isbn()const { return bookNo; }
	Sales_data& combine(const Sales_data&);

	friend std::istream &read(std::istream &is, Sales_data &item);
	friend std::ostream &print(std::ostream &os, const Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
};

// nonmember functions declaration
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

inline double Sales_data::avg_price()const
{
	return units_sold ? revenue / units_sold : 0;
}

#endif