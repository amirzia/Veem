#include <ncurses.h>
#include <iostream>

#include "text.hpp"

void print_help() {
	std::cout << "Usage: ./veem [file_name]" << std::endl;
}

int main(int argc, char **argv) {

	if (argc != 2) {
		print_help();
		exit(1);
	}

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
