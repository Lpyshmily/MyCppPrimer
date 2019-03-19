#include <iostream>
#include <vector>
using std::vector;
using std::cout;
int main()
{
	vector<int> v1{0, 1, 1, 2};
	vector<int> v2{0, 1, 1, 2, 3, 5, 8};
	bool flag;
	if (v1.size() != v2.size())
	{
		vector<int>::size_type num = (v1.size() < v2.size()) ? v1.size() : v2.size();
		for (decltype(num) i = 0; i != num; ++i)
			if (v1[i] != v2[i])
			{
				flag = false;
				cout << "not all equal.\n";
				break;
			}
		flag = true;
		cout << "Yes!\n";
	}
	else
		cout << "These two vectors has the same length.\n";
	return 0;
}