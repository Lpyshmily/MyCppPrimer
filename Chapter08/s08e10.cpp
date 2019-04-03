#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using std::string;
using std::vector;
int main()
{
	vector<string> vec;
	std::ifstream in_file("../data/book.txt");
	string str1;
	while(getline(in_file, str1))
		vec.push_back(str1);
	
	std::istringstream istr;
	string str2;
	for (auto &item : vec)
	{
		std::cout << item << std::endl;
		istr.str(item);
		while (istr >> str2)
			std::cout << str2 << std::endl;
		istr.clear(); // 清楚到达文件尾的错误！！
	}
	in_file.close();
	return 0;
}