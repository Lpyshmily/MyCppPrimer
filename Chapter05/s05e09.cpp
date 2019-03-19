#include <iostream>
using std::cin;
using std::cout;
int main()
{
	char ch;
	unsigned a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;
	while (cin >> ch)
	{
		if (ch == 'a')
			++a_count;
		else if (ch == 'e')
			++e_count;
		else if (ch == 'i')
			++i_count;
		else if (ch == 'o')
			++o_count;
		else if (ch == 'u')
			++u_count;
	}
	cout << "a occurs \t" << a_count << " times.\n";
	cout << "e occurs \t" << e_count << " times.\n";
	cout << "i occurs \t" << i_count << " times.\n";
	cout << "o occurs \t" << o_count << " times.\n";
	cout << "u occurs \t" << u_count << " times.\n";
	return 0;
}