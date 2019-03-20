#include <iostream>
using std::cout;
using std::endl;
int my_compare(int a, int *pb)
{
	return a > *pb ? a : *pb;
}

int main()
{
	int x = 10, y = 5, *py = &y;
	cout << my_compare(x, py) << endl;
	return 0;
}