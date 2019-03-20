#include <iostream>
using std::cout;
using std::endl;
void p_swap(int **a, int **b)
{
	auto temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int x = 5, y = 10, *px = &x, *py = &y;
	p_swap(&px, &py);
	cout << *px << " " << *py << endl;
	return 0;
}