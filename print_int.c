#include "main.h"

/**
 * print_whole_int - prints the integer as char
 * @value: the value to be printed
 * Return: void
 */
void print_int(unsigned int n)
{
        if (n < 10)
	{
		_putchar(n + '0');
		return;
	}
	print_int(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_int - prints an unsigned int
 * @value: the value to be printed
 * Return: void
 */
int print_i(va_list ap)
{
	int value, size;

	value = va_arg(ap, int);
	size = 0;
	if (value < 0)
	{
		_putchar('-');
		value = value * -1;
		size += 1;
	}
	size += _size(value, 10);
	print_int(value);
	return (size);
}

int print_d(va_list ap)
{
	return (print_i(ap));
}

int print_unsignedint(va_list ap)
{
	unsigned int value;
	int size;

	value = va_arg(ap, unsigned int);
	size = _size(value, 10);
	print_int(value);
	return (size);
}
