#include <ncurses.h>
#include <iostream>

#include "text.hpp"

void test_text() {
	LinkedTest txt{ "salam" };
	std::cout << txt.get_whole_text();
}

int main() {
	test_text();
	
	int ichar; // input char

	initscr(); // start curses mode
	cbreak();
	noecho();
	
	while (true) {
		ichar = getch(); // wait for user input
		printw("%c", ichar);
		refresh(); // print the char on to the real screen
	}
	
	endwin();
	return 0;
}
