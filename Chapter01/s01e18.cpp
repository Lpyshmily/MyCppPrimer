// 统计输入中每个值连续出现了多少次
#include <iostream>
int main()
{
	int currVal = 0, val = 0;
	if (std::cin >> currVal)
	{
		int count = 1;
		val = currVal;
		while (std::cin >> val)
		{
			if (val == currVal)
				count++;
			else
			{
				std::cout << currVal << "comes out " << count << " times.\n";
				currVal = val;
				count = 1;
			}
		}
		std::cout << currVal << " comes out " << count << " times.\n";
	}
	return 0;
}