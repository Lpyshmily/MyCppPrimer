// understand wrong, but execute right
#include <iostream>
#include <string>
using std::string;
int main()
{
	string middle_list("acemnorsuvwxz");
	string str_test("rfglequywftqooruaturyefghwe");
	string::size_type pos_first = 0, pos_second = 0, length = 0, temp, record1;
	int flag = 1; // judge end
	while (flag)
	{
		pos_first = str_test.find_first_of(middle_list, pos_first);
		if (pos_first == string::npos)
			break;
		pos_second = str_test.find_first_not_of(middle_list, pos_first);
		if (pos_second == string::npos)
		{
			temp = str_test.size() - pos_first;
			flag = 0;
		}
		else
			temp = pos_second - pos_first;

		if (temp > length)
		{
			length = temp;
			record1 = pos_first;
		}
		if (flag)
			pos_first = pos_second;
		else
			break;
	}
	std::cout << string(str_test, record1, length) << std::endl;
	return 0;
}