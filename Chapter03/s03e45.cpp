#include <iostream>
#include <cstddef>

using std::cout;

int main()
{
	constexpr size_t row_cnt = 3, col_cnt = 4;
	int ia[row_cnt][col_cnt] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	for (auto &i : ia)
	{
		for (int j : i)
			cout << j << " ";
		cout << "\b.\n";
	}

	for (int i = 0; i < row_cnt; i++)
	{
		for (int j = 0; j < col_cnt; j++)
			cout << ia[i][j] << " ";
		cout << "\b.\n";
	}

	for (auto i = ia; i != ia + row_cnt; i++)
	{
		for (int *j = *i; j != *i + col_cnt; j++)
			cout << *j <<" ";
		cout << "\b.\n";
	}

	return 0;
}