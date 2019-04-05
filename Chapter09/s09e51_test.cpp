#include "s09e51.h"
int main()
{
	Mydate day_1("1/1/1996");
	Mydate day_2;
	Mydate day_3("Apr 5, 1996");
	Mydate day_4("April 5 1996");
	day_1.show();
	day_2.show();
	day_3.show();
	day_4.show();
	return 0;
}