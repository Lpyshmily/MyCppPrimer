#ifndef S07E15_H_
#define S07E15_H_

#include <iostream>
#include <string>

struct Person
{
	std::string name;
	std::string address;

	Person() = default;
	Person(const std::string sname, const std::string saddr) : name(sname), address(saddr) {}
	Person(std::istream &is) { read(is, *this); }

	std::string get_name()const { return name; }
	std::string get_address()const { return address; }
}

// nonmember functions
std::istream &read(std::istream &is, Person &person)
{
	is >> person.name >> person.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
	os << person.name << " " << person.address;
	return os;
}

#endif