#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> v;
    std::string buffer;
    while (std::cin >> buffer)
    {
    	std::cout << v.capacity() << std::endl;
    	v.push_back(buffer);
    }
    return 0;
}