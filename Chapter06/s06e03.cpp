#include <iostream>
#include <stdexcept>
using std::cout;
using std::endl;
using std::runtime_error;

int fact(int num)
{
	// when num < 0, throw a error, and default return 1;
	try
	{
		if (num < 0)
			throw runtime_error("Please input a positive numbet or zero!");
		else if (num == 0)
			return 1;
		else
		{
			int result = 1;
			for (int i = 1; i <= num; ++i)
				result *= i;
			return result;
		}
	}
	catch (runtime_error err)
	{
		cout << err.what() << endl;
		return 0; // you can also set a return value here.
	}
}

int main()
{
	cout << (120 == fact(5)) << endl;
	return 0;
}