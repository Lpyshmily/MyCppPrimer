#include <iostream>
using std::cin;
using std::cout;
int main()
{
	char ch, last_ch;
	unsigned a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0, ff_count = 0, fl_count = 0, fi_count = 0;
	int dog = 0;
	while (cin >> ch)
	{
		switch (ch)
		{
			case 'a':
			case 'A':
				++a_count;
				break;
			case 'e':
			case 'E':
				++e_count;
				break;
			case 'i':
				if (last_ch == 'f')
					++fi_count;
			case 'I':
				++i_count;
				break;
			case 'o':
			case 'O':
				++o_count;
				break;
			case 'u':
			case 'U':
				++u_count;
				break;
			case 'f':
				if (last_ch == 'f')
					++ff_count;
				break;
			case 'l':
				if (last_ch == 'f')
					++fl_count;
				break;
			default:
				break;
		}
		last_ch = ch;
	}
	cout << "a(A) occurs \t" << a_count << " times.\n";
	cout << "e(E) occurs \t" << e_count << " times.\n";
	cout << "i(I) occurs \t" << i_count << " times.\n";
	cout << "o(O) occurs \t" << o_count << " times.\n";
	cout << "u(U) occurs \t" << u_count << " times.\n";
	cout << "ff occurs \t" << ff_count << " times.\n";
	cout << "fl occurs \t" << fl_count << " times.\n";
	cout << "fi occurs \t" << fi_count << " times.\n";
	return 0;
}