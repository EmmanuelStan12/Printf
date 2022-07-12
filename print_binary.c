#include "main.h"

/**
 * convert_int - converts an int
 * @value: value to be converted
 * Return: size of the int
 */
void convert_int(unsigned int value)
{
	unsigned int factor, remainder;

	if (value <= 0)
		return;
	factor = value / 2;
	remainder = value % 2;
	convert_int(factor);
	_putchar(remainder + '0');
}

/**
 * print_binary - prints a binary
 * @ap: the value to be converted
 * Return: size of the int
 */
int print_binary(va_list ap)
{
	unsigned int size, num;

	num = va_arg(ap, int);
	size = 0;
	if (num < 1)
	{
		_putchar('0');
		size++;
		return (size);
	}
	convert_int(num);
	size = _size(num, 2);
	return (size);
}
