#include <iostream>
using std::cout;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x = 5, y = 10;
	swap(&x, &y);
	cout << x << ", " << y << ".\n";
	return 0;
}