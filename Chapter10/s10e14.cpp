#include <iostream>
int main()
{
	auto f = [] (double a, double b) {return a + b;};
	std::cout << f(3.4, 3.5) << std::endl;
	return 0;
}