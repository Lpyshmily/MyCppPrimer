#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec;
	int num;
	while (cin >> num)
		vec.push_back(num);
	if (vec.empty())
		cout << "None!\n";
	else if (vec.size() == 1)
		cout << "Only one element!\n";
	else
	{
		for (auto it = vec.begin(); it != vec.end() - 1; it++)
			cout << *it + *(it+1) << ",";
		cout << "\b.\n";
	}
		
	return 0;
}