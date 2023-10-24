#ifndef CPP07_TEMPLATES_HPP
#define CPP07_TEMPLATES_HPP

#include <iostream>

template<typename input>
void swap(input &a, input &b){
	input temp = a;
	a = b;
	b = temp;
}

template<typename var>
var max(var a, var b) {
	if (a > b)
		return (a);
	return (b);
}

template<typename var>
var min(var a, var b) {
	if (a < b)
		return (a);
	return (b);
}

#endif //CPP07_TEMPLATES_HPP
