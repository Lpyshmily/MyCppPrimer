#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using std::vector;
using std::string;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

bool valid(const string &str)
{
	return isdigit(str[0]);
}

string format(const string &str)
{
	return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main()
{
	string line, word;
	vector<PersonInfo> people;
	std::ifstream in_file("../data/info.txt");
	while(getline(in_file, line))
	{
		PersonInfo info;
		std::istringstream record(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}

	for (const auto &entry : people)
	{
		std::ostringstream formatted, badnums;
		for (const auto &nums : entry.phones)
		{
			if (!valid(nums))
				badnums << " " << nums;
			else
				formatted << " " << format(nums);
		}
		if (badnums.str().empty())
			std::cout << entry.name << " " << formatted.str() << std::endl;
		else
			std::cerr << "input error: " << entry.name << " invalid number(s)" << badnums.str() << std::endl;
	}
	return 0;
}