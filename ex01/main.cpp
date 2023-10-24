#include "iter.hpp"
#include <iostream>

char rot(char a){
	return (a + 1);
}

int main() {
	char string[11];
	string[0] = 'H';
	string[1] = 'e';
	string[2] = 'l';
	string[3] = 'l';
	string[4] = 'o';
	string[5] = ' ';
	string[6] = 'W';
	string[7] = 'o';
	string[8] = 'r';
	string[9] = 'l';
	string[10] = 'd';

	for (int i = 0; i < 11; ++i) {
		std::cout << string[i];
	}
	std::cout << std::endl;
	iter(string,11,rot);
	for (int i = 0; i < 11; ++i) {
		std::cout << string[i];
	}
	std::cout << std::endl;
}
