#include "main.h"

int _size(unsigned int num, int divisor)
{
	int size;

	size = 0;
	while (num != 0)
	{
		num = num / divisor;
		size++;
	}
	return (size);
}
