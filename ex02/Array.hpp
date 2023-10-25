#ifndef CPP07_ARRAY_HPP
#define CPP07_ARRAY_HPP

#include <exception>
#include <iostream>

template<class T>
class Array {
private:
	unsigned int arrsize;
	T *arr;
public:
	Array() : arrsize(0), arr(new T[arrsize]) {}
	Array(unsigned int n) : arrsize(n), arr(new T[arrsize]) {}
	Array(Array& src) {
		this->arrsize = src.arrsize;
		this->arr = new T[this->arrsize];
		for (unsigned int i = 0; i < this->arrsize; ++i) {
			this->arr[i] = src.arr[i];
		}
	}
	~Array() {
		delete[] this->arr;
	}

	unsigned int size() {
		return (this->arrsize);
	}
	class outOfBoundsException : public std::exception
	{
	public:
		const char * what() const throw() {
			return ("out of bounds of array");
		}
	};

	Array& operator=(Array const &src) {
		if (&src != this) {
			delete[] this->arr;
			this->arrsize = src.arrsize;
			this->arr = new T[arrsize];
			for (int i = 0; i < this->arrsize; ++i) {
				this->arr[i] = src.arr[i];
			}
			return *this;
		}
	}
	T& operator[](unsigned int idx) {
		if (idx < this->arrsize){
			return (arr[idx]);
		}
		throw (outOfBoundsException());
	}
};

#endif //CPP07_ARRAY_HPP
