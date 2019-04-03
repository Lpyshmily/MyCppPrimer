#ifndef S07E22_H_
#define S07E22_H_

#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	std::string address;
public:
	Person() = default;
	Person(const std::string sname, const std::string saddr) : name(sname), address(saddr) {}
	Person(std::istream &is) { read(is, *this); }

	std::string get_name()const { return name; }
	std::string get_address()const { return address; }

	friend std::istream &read(std::istream &is, Person &person);
	friend std::ostream &print(std::ostream &os, const Person &person);
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