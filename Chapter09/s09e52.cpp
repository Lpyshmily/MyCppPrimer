#include <iostream>
#include <string>
#include <stack>
using std::string;

string del_bracket(const string &old_str)
{
	std::stack<char> stk;
	string new_str, temp;
	bool flag = 0;
	for (auto item : old_str)
	{
		if (item == '(')
			flag = true;
		else if (item == ')')
		{
			flag = false;
			// pop to temp
			while (!stk.empty())
			{
				temp += stk.top();
				stk.pop();
			}
			// 颠倒顺序
			for (int i = temp.size() - 1; i >= 0; --i)
				new_str += temp[i];
		}
		// normal char
		else
		{
			if (flag)
				stk.push(item);
			else
				new_str += item;
		}
	}
	return new_str;
}

int main()
{
	string str = "This is (my wife), peipei.";
	std::cout << del_bracket(str) << std::endl;
	return 0;
}