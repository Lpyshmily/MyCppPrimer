#include <iostream>
#include <vector>
using std::cout;
using std::vector;

using compute = int(*)(int, int);
int num_add(int n1, int n2) {return n1 + n2;}
int num_sub(int n1, int n2) {return n1 - n2;}
int num_mul(int n1, int n2) {return n1 * n2;}
int num_div(int n1, int n2) {return n1 / n2;}

int main()
{
	vector<compute> f{num_add, num_sub, num_mul, num_div};
	for (auto iter = f.begin(); iter != f.end(); ++iter)
		cout << (*iter)(5, 2) << ",";
	cout << "\b.\n";
	return 0;
}