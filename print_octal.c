#include "main.h"

/**
 * print_octal - prints a value in octadecimal
 * @value: the value to be printed
 * Return: void
 */
void print_octal(unsigned int value)
{
	unsigned int factor, remainder;

	if (value / 8 == 0)
	{
		_putchar(value % 8 + '0');
		return;
	}
	factor = value / 8;
	remainder = value % 8;
	print_octal(factor);
	_putchar(remainder + '0');
}

/**
 * print_octaldecimal - prints a value in octadecimal
 * @ap: list to be evaluated
 * Return: void
 */
int print_octadecimal(va_list ap)
{
	unsigned int num, size;
	
	num = va_arg(ap, unsigned int);
	size = _size(num, 8);
	print_octal(num);
	return (size);
}
