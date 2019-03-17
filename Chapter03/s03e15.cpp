#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> Myv;
	string value;
	while (cin >> value)
		Myv.push_back(value);
	for (auto i : Myv)
		cout << i << endl;
	return 0;
}