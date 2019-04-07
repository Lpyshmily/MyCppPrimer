#include <iostream>
#include <algorithm>
int main()
{
	int num = 5;
	auto decrease_and_check = [&num] {bool result = (num == 0); if (!result) --num; return result;};
	while (!decrease_and_check())
		std::cout << num << std::endl;
	return 0;
}