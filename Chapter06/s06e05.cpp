#include <iostream>
using std::cin;
using std::cout;

void my_abs(int num)
{
	int num_abs = num < 0 ? -num : num;
	cout << "The abs of " << num << " is " << num_abs << ".\n"; 
}

int main()
{
	int number;
	cin >> number;
	my_abs(number);
	return 0;
}