#include "main.h"

/**
 * print_whole_int - prints the integer as char
 * @value: the value to be printed
 * Return: void
 */
int print_whole_int(unsigned int n, int num)
{
        if (n < 10)
	{
		_putchar(n + '0');
		num++;
		return (num);
	}
	num = num + print_whole_int(n / 10, num);
	_putchar((n % 10) + '0');
	num++;
	return (num);
}

/**
 * print_int - prints an unsigned int
 * @value: the value to be printed
 * Return: void
 */
int print_int(va_list ap)
{
	int value, size;

	value = va_arg(ap, int);
	if (value < 0)
	{
		_putchar('-');
		value = value * -1;
	}
	size = _size(value, 10);
	print_whole_int(value, 0);
	return (size);
}

int print_unsignedint(va_list ap)
{
	unsigned int value;
	int size;

	value = va_arg(ap, unsigned int);
	size = _size(value, 10);
	print_whole_int(value, 0);
	return (size);
}
