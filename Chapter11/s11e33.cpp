#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <stdexcept>
using std::string;
using std::map;
using std::ifstream;
using std::istringstream;
using Map = map<string, string>;

Map buildMap(ifstream &map_file)
{
	Map trans_map;
	string key, value;
	while (map_file >> key && getline(map_file, value))
		if (value.size() > 1)
			trans_map[key] = value.substr(1);
		else
			throw std::runtime_error("no rule for " + key);
	return trans_map;
}

const string &transform(const string &s, const Map &m)
{
	auto map_it = m.find(s);
	if (map_it != m.end())
		return map_it->second;
	else
		return s;
}

void word_transform(ifstream &map_file, ifstream &input)
{
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input, text))
	{
		istringstream stream(text);
		string word;
		while (stream >> word)
			std::cout << transform(word, trans_map) << " ";
		std::cout << "\b\n";
	}
}

int main()
{
	ifstream in_file("../data/source.txt"), map_file("../data/map.txt");
	word_transform(map_file, in_file);
	return 0;
}