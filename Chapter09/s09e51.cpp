#include "s09e51.h"
#include <iostream>
#include <string>
using std::string;

Mydate::Mydate()
{
	year = 1996;
	month = 4;
	date = 5;
}

Mydate::Mydate(const string &str)
{
	if (str.find('/') != string::npos)
	{
		month = stoi(str);
		date = stoi(str.substr(str.find('/') + 1));
		year = stoi(str.substr(str.rfind('/') + 1));
	}
	else
	{
		if (str.find("Jan") != string::npos)
			month = 1;
		else if (str.find("Feb") != string::npos)
			month = 2;
		else if (str.find("Mar") != string::npos)
			month = 3;
		else if (str.find("Apr") != string::npos)
			month = 4;
		else if (str.find("May") != string::npos)
			month = 5;
		else if (str.find("Jun") != string::npos)
			month = 6;
		else if (str.find("Jul") != string::npos)
			month = 7;
		else if (str.find("Aug") != string::npos)
			month = 8;
		else if (str.find("Sep") != string::npos)
			month = 9;
		else if (str.find("Oct") != string::npos)
			month = 10;
		else if (str.find("Nov") != string::npos)
			month = 11;
		else if (str.find("Dec") != string::npos)
			month = 12;

		// string num_list = "0123456789";
		date = stoi(str.substr(str.find(' ') + 1));
		year = stoi(str.substr(str.rfind(' ') + 1));
	}
}

void Mydate::show()
{
	std::cout << year << "/" << month << "/" << date << std::endl;
}