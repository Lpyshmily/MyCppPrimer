#include <iostream>
using std::cout;

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i;
	for (auto item : arr)
		cout << item << ",";
	cout << "\b.\n";
	return 0;
}