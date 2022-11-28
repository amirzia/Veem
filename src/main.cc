#include <ncurses.h>
#include <iostream>

#include "text.hpp"

int main() {
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
