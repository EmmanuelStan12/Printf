#include "main.h"

/**
 * print_octal - prints a value in octadecimal
 * @value: the value to be printed
 * Return: void
 */
int print_octal(unsigned int value, int num)
{
	unsigned int factor, remainder;

	if (value / 8 == 0)
	{
		_putchar(value % 8 + '0');
		num++;
		return (num);
	}
	factor = value / 8;
	remainder = value % 8;
	num = num + print_octal(factor, num);
	_putchar(remainder + '0');
	num++;
	return (num);
}

/**
 * print_octaldecimal - prints a value in octadecimal
 * @ap: list to be evaluated
 * Return: void
 */
int print_octadecimal(va_list ap)
{
	unsigned int result = va_arg(ap, unsigned int);

	return print_octal(result, 0);
}
