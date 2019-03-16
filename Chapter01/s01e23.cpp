#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item, currItem;
	int count;
	if (std::cin >> currItem)
	{
		count = 1;
		while (std::cin >> item)
		{
			if (item.isbn() == currItem.isbn())
				count++;
			else
			{
				std::cout << currItem.isbn() << " occurs " << count << " times.\n";
				currItem = item;
				count = 1;
			}
		}
		std::cout << currItem.isbn() << " occurs " << count << " times.\n";
	}
	return 0;
}