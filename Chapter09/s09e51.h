#ifndef S09E51_H_
#define S09E51_H_

#include <string>

class Mydate
{
private:
	unsigned year, month, date;
public:
	Mydate();
	Mydate(const std::string &);
	void show();
};

#endif