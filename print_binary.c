#include "main.h"

/**
 * convert_int - converts an int
 * @value: value to be converted
 * Return: size of the int
 */
void convert_int(unsigned int value)
{
	unsigned int factor, remainder;

	if (value == 0)
		return;
	factor = value / 2;
	remainder = value % 2;
	convert_int(factor);
	_putchar(remainder + '0');
}

/**
 * print_binary - prints a binary
 * @value: the value to be converted
 * Return: size of the int
 */
int print_binary(va_list ap)
{
	unsigned int num, size;
	int value;

	value = va_arg(ap, int);
	size = 0;
	if (value < 0)
	{
		size = size + _putchar('0');
		return (size);
	}
	num = value;
	convert_int(num);
	size = size + _size(num, 2);
	return (size);
}
