#ifndef S07E27_H_
#define S07E27_H_

#include <iostream>
#include <string>

class Screen
{
public:
	typedef std::string::size_type pos;

	Screen() = default;
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

	char get()const { return contents[cursor]; }
	inline char get(pos row, pos col)const;
	Screen &move(pos row, pos col);
	Screen &set(char c);
	Screen &set(pos row, pos col, char c);
	const Screen &display(std::ostream &os)const;
	Screen &display(std::ostream &os);
private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	std::string contents;
	void do_display(std::ostream &os)const { os << contents; }
};

inline Screen &Screen::move(pos row, pos col)
{
	cursor = row * width + col;
	return *this;
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos row, pos col, char c)
{
	contents[row * width + col] = c;
	return *this;
}


#endif