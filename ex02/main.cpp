#include "Array.hpp"
#include "iostream"
#include "exception"

int main() {
	int ten = 10;
	Array<int> b(ten);

	try {
		for (int i = 0; i <= ten ; ++i) {
			b[i] = i;
			std::cout << "arr " << i << ": "<< b[i] << std::endl;
		}
	}
	catch (Array<int>::outOfBoundsException &out) {
		std::cout << out.what() << std::endl;
	}

	Array<int> cpy(b);
	unsigned int s = cpy.size();
	try {
		for (unsigned int i = 0; i < s ; ++i) {
			std::cout << "cpy " << i << ": "<< b[i] << std::endl;
		}
	}
	catch (Array<int>::outOfBoundsException &out) {
		std::cout << out.what() << std::endl;
	}
	return (0);
}