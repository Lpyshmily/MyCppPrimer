#include "s07e27.h"

char Screen::get(pos row, pos col)const
{
	return contents[row * width + col];
}

const Screen &Screen::display(std::ostream &os)const
{
	do_display(os);
	return *this;
}
Screen &Screen::display(std::ostream &os)
{
	do_display(os);
	return *this;
}