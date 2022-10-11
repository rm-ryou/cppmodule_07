#ifndef ITER_H
#define ITER_H

#include <iostream>

template<class T> void	test(T& a);
template<class T> void	test(T& a) {
	a++;
}

template<class T> void	iter(T *array, size_t len, void (*f)(T &));
template<class T> void	iter(T *array, size_t len, void (*f)(T &)) {
	if (array == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

#endif /* ITER_H */