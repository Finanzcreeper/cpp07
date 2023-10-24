#include "templates.hpp"
#include <iostream>
#include <string>

int main() {
	{
		int a = 12;
		int b = 8;
		int min;
		int max;

		std::cout << "a: " << a << "	b: " << b << std::endl;
		::swap(a, b);
		std::cout << "a: " << a << "	b: " << b << std::endl;
		std::cout << "-----------------" << std::endl;
		std::cout << "a: " << a << "	b: " << b << std::endl;
		min = ::min(a, b);
		std::cout << "min is: " << min << std::endl;
		std::cout << "-----------------" << std::endl;
		std::cout << "a: " << a << "	b: " << b << std::endl;
		max = ::max(a, b);
		std::cout << "max is: " << max << std::endl;
	}
	std::cout << "==============================================" << std::endl;
	{
		std::string a = "test";
		std::string b = "bla";
		std::string min;
		std::string max;

		std::cout << "a: " << a << "	b: " << b << std::endl;
		::swap(a, b);
		std::cout << "a: " << a << "	b: " << b << std::endl;
		std::cout << "-----------------" << std::endl;
		std::cout << "a: " << a << "	b: " << b << std::endl;
		min = ::min(a, b);
		std::cout << "min is: " << min << std::endl;
		std::cout << "-----------------" << std::endl;
		std::cout << "a: " << a << "	b: " << b << std::endl;
		max = ::max(a, b);
		std::cout << "max is: " << max << std::endl;
	}
}