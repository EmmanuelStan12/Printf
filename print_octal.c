#include "main.h"

/**
 * print_oct - prints a value in octadecimal
 * @value: the value to be printed
 * Return: void
 */
int print_oct(unsigned int value)
{
	unsigned int factor;
	int size, i;
	char *p;

	size = 0;
	factor = value;
	while (factor != 0)
	{
		factor /= 8;
		size++;
	}
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (-1);
	i = 0;
	factor = value;
	while (factor != 0)
	{
		*(p + i) = factor % 8;
		factor /= 8;
		i++;
	}
	i--;
	while (i >= 0)
	{
		int k;

		k = *(p + i);
		_putchar(k + '0');
		i--;
	}
	return (size);
}



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
 * print_octadecimal - prints a value in octadecimal
 * @ap: list to be evaluated
 * Return: void
 */
int print_octadecimal(va_list ap)
{
	unsigned int num, size;

	num = va_arg(ap, unsigned int);
	size = print_oct(num);
	return (size);
}
