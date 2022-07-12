#include "main.h"

/**
 * _size - computes the size of a type
 * @num: the number to be evaluated
 * @divisor: the type to be determined
 * Return: the length
 */
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
