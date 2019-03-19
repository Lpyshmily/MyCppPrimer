#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
int main()
{
	string curr_str, str, last_str;
	int curr_count = 0, count = 0;
	while (cin >> str)
	{
		if (str == last_str)
			++count;
		else
		{
			if (count > curr_count)
			{
				curr_str = last_str;
				curr_count = count;
			}
			last_str = str;
			count = 1;
		}
	}
	cout << curr_str << " occurs " << curr_count << " times.\n";
	return 0;
}