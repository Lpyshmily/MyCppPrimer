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
	else
	{
		for (auto it = vec.begin(), it2 = vec.end() - 1; it <= it2; it++, it2--)
			cout << *it + *it2 << ",";
		cout << "\b.\n";
	}
		
	return 0;
}