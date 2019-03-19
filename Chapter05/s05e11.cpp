#include <iostream>
using std::cin;
using std::cout;
int main()
{
	char ch;
	unsigned a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0, space_count = 0, tab_count = 0, n_count = 0;
	int dog = 0;
	cin >> std::noskipws;
	while (cin >> ch)
	{
		switch (ch)
		{
			case 'a':
			case 'A': ++a_count; break;
			case 'e':
			case 'E': ++e_count; break;
			case 'i':
			case 'I': ++i_count; break;
			case 'o':
			case 'O': ++o_count; break;
			case 'u':
			case 'U': ++u_count; break;
			case ' ':
				++space_count;
				break;
			case '\t':
				++tab_count;
				break;
			case '\n':
				++n_count;
				break;
			default:
				break;
		}
	}
	cout << "a(A) occurs \t" << a_count << " times.\n";
	cout << "e(E) occurs \t" << e_count << " times.\n";
	cout << "i(I) occurs \t" << i_count << " times.\n";
	cout << "o(O) occurs \t" << o_count << " times.\n";
	cout << "u(U) occurs \t" << u_count << " times.\n";
	cout << "space occurs \t" << space_count << " times.\n";
	cout << "tab occurs \t" << tab_count << " times.\n";
	cout << "\\n occurs \t" << n_count << " times.\n";
	return 0;
}