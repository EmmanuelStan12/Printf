#include "main.h"

/**
 * print_int - function that prints an integer as a character
 * @num: the value to be printed
 * @size: the size of the num
 * Return: void
 */
int print_int(unsigned int num, unsigned int size)
{
	unsigned int value, unit;

	value = num;
	unit = 1;
	while (value > 9)
	{
		value /= 10;
		unit *= 10;
	}

	while (unit >= 1)
	{
		size += _putchar(((num / unit) % 10) + '0');
		unit /= 10;
	}
	return (size);
}

/**
 * print_i - prints an unsigned int
 * @ap: the list to be printed
 * Return: void
 */
int print_i(va_list ap)
{
	int value, size, len;

	value = va_arg(ap, int);
	size = 0;
	if (value < 0)
	{
		size += _putchar('-');
		value = value * -1;
	}
	len = print_int(value, size);
	return (len);
}

/**
 * print_d - prints a decimal digit
 * @ap: list
 * Return: the length
 */
int print_d(va_list ap)
{
	return (print_i(ap));
}

/**
 * print_unsignedint - prints a decimal digit
 * @ap: list
 * Return: the length
 */
int print_unsignedint(va_list ap)
{
	unsigned int value;
	int size = 0, len;

	value = va_arg(ap, unsigned int);
	len = print_int(value, size);
	return (len);
}
