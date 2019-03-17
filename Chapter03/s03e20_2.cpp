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
		for (int i = 0; i <= vec.size() - 1 - i; i++)
			cout << vec[i] + vec[vec.size() - 1 - i] << " ";
	return 0;
}