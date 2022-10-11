#include "iter.h"

int	main()
{
	{
		int	array[] = {1, 2, 3};
		::iter(array, sizeof(array) / sizeof(*array), test);
		for (int i = 0, j = sizeof(array) / sizeof(*array); i < j; i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;
	}
	{
		char	array[] = "abcd01234";
		::iter(array, sizeof(array) / sizeof(*array), test);
		for (int i = 0, j = sizeof(array) / sizeof(*array); i < j; i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;
	}
	return 0;
}