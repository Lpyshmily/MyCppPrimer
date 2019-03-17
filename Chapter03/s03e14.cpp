#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> Myv;
	int value;
	while (cin >> value)
		Myv.push_back(value);
	for (int i : Myv)
		cout << i << endl;
	return 0;
}