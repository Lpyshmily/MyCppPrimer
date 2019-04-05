#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
int sum_for_int(const vector<string> &vec)
{
	int sum = 0;
	for (auto &item : vec)
		sum += stoi(item);
	return sum;
}
double sum_for_double(const vector<string> &vec)
{
	double sum = 0.0;
	for (auto &item : vec)
		sum += stod(item);
	return sum;
}
int main()
{
	vector<string> vec_int{"3", "7", "10", "100"};
	std::cout << sum_for_int(vec_int) << std::endl;

	vector<string> vec_double{"3.1", "5e2", "-2.7"};
	std::cout << sum_for_double(vec_double) << std::endl;
	return 0;
}