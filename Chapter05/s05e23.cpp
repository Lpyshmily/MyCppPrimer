#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;
int main()
{
	int m, n;
	cin >> m >> n;
	try
	{
		if (n == 0)
			throw runtime_error("0 can't be the second number.");
		cout << m/n << endl;
	}
	catch (runtime_error err)
	{
		cout << err.what() << endl;
	}
	return 0;
}