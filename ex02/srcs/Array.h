#ifndef ARRAY_H
#define ARRAY_H

#include <cstdlib>
#include <iostream>

template<class T>
class Array {
private:
	T*	array_;
	int	size_;
public:
	Array(): size_(0) {
		std::cout << "Constructor called." << std::endl;
		array_ = new T[this->size_];
	};
	Array(int size): size_(size) {
		std::cout << "Constructor called." << std::endl;
		array_ = new T[this->size_];
	};
	Array(const Array& array) {
		std::cout << "Copy constructor called." << std::endl;
		*this = array;
	};
	Array& operator=(const Array& other) {
		if (this != &other) {
			this->size_ = other.size_;
			this->array_ = new T[this->size_];
			for (int i = 0; i < this->size_; i++)
				this->array_[i] = other.array_[i];
		}
		return *this;
	};
	~Array() {
		std::cout << "Destructor called." << std::endl;
		delete[] this->array_;
	};
	T& operator[](const int i) {
		if (i < 0 || i >= this->size_)
			throw Array::ArrayException();
		return (this->array_[i]);
	};
	class ArrayException: public std::exception {
		public:
			virtual const char* what() const throw() {
				return "invalid index.";
			};
	};
};

#endif /* ARRAY_H */