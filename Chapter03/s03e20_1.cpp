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
		for (int i = 0; i < vec.size() - 1; i++)
		{
			cout << vec[i] + vec[i+1];
			if (i == vec.size() - 2)
				cout << endl;
			else
				cout << ",";
		}
	return 0;
}