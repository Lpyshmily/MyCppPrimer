#include <iostream>
#include <vector>
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto it = scores.begin();
	while (cin >> grade)
		if (grade <= 100)
			*(it + grade/10) += 1;
	for (; it != scores.end(); it++)
		cout << *it << ",";
	cout << "\b.\n";
	return 0;
}