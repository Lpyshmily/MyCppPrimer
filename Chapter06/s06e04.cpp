#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void fact()
{
	int num, result = 1;
	cout << "Please input a number (negative to exit):";
	cin >> num;
	if (num < 0)
		cout << "Detect negative number, exit.\n";
	else
	{
		// when num is 0, skip the loop
		for (int i = 1; i <= num; ++i)
			result *= i;
		cout << "The factorial of " << num << " is " << result << endl;
	}
}

int main()
{
	fact();
	return 0;
}