#include <iostream>
void print_middle(int n1, int n2)
{
	if (n1 > n2)
		print_middle(n2, n1);
	for (int i = n1; i <= n2; i++)
		std::cout << i << " ";
}

int main()
{
	int x, y;
	std::cout << "Please enter two numbers:";
	std::cin >> x >> y;
	print_middle(x, y);
	return 0;
}