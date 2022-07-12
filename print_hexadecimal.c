#include "main.h"

void print_hex(unsigned int value, char adder)
{
	unsigned int factor, remainder;

	if (value / 16 == 0)
	{
		remainder = value % 16;
		if (remainder > 9)
			_putchar(remainder + adder);
		else
			_putchar(remainder + '0');
		return;
	}
	factor = value / 16;
	remainder = value % 16;
	print_hex(factor, adder);
	if (remainder > 9)
		_putchar(remainder + adder);
	else
		_putchar(remainder + '0');
}

/**
 * print_hexadecimal - prints hexadecimal
 * @ap: list to be evaluated
 * Return: void
 */
int print_hexadecimal_lower(va_list ap)
{
	unsigned int num, size;
		
	num = va_arg(ap, unsigned int);
	size = _size(num, 16);
	print_hex(num, 87);
	return (size);
}

/**
 * print_hexadecimal - prints hexadecimal
 * @ap: list to be evaluated
 * Return: void
 */
int print_hexadecimal_caps(va_list ap)
{
	unsigned int num, size;
		
	num = va_arg(ap, unsigned int);
	size = _size(num, 16);
	print_hex(num, 55);
	return (size);
}
