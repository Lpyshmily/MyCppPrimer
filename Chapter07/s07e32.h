#ifndef S07E32_H_
#define S07E32_H_

#include <iostream>
#include <string>
#include <vector>

class Screen;

class Window_mgr
{
public:
	using ScreenIndex = std::vecotr<Screen>::size_type;
	void clear(ScreenIndex);
private:
	std::vectot<Screen> screens{Screen(24, 80, ' ')};
}

class Screen
{
friend void Window_mgr::clear(ScreenIndex);

public:
	typedef std::string::size_type pos;

	Screen() = default;
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

	char get()const { return contents[cursor]; }
	inline char get(pos row, pos col)const { return contents[row * width + col]; }
	Screen &move(pos row, pos col);
	Screen &set(char c);
	Screen &set(pos row, pos col, char c);
	const Screen &display(std::ostream &os)const { do_display(os); return *this; }
	Screen &display(std::ostream &os) { do_display(os); return *this; }
private:
	pos cursor = 0;
	pos height = 0;
	pos width = 0;
	std::string contents;
	void do_display(std::ostream &os)const { os << contents; }
};

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

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