#include <iostream>
#include <utility>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::pair;
using Type = vector<pair<string, int>>;

void print(Type &vec)
{
	for (auto &item : vec)
		std::cout << item.first << "," << item.second << std::endl;
	std::cout << std::endl;
}

int main()
{
	Type v1, v2, v3, v4;
	string str;
	int num;
	while (std::cin >> str >> num)
	{
		v1.push_back(pair<string, int>(str, num));
		v2.push_back(make_pair(str, num));
		v3.push_back({str, num});
		v4.emplace_back(str, num);
	}
	print(v1);
	print(v2);
	print(v3);
	print(v4);
	return 0;
}