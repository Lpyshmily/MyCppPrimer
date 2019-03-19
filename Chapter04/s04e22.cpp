#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
int main()
{
	int grade = 0;
	cin >> grade;
	string final_grade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade < 75) ? "low pass" : "pass";
	cout << final_grade << std::endl;
	return 0;
}