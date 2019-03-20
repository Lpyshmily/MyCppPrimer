#include <iostream>
using std::cout;
using std::endl;

int call_count()
{
	static int count = 0;
	return count++;
}

int main()
{
	for (int i = 0; i != 10; ++i)
		cout << call_count() << endl;
	return 0;
}