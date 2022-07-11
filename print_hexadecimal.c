#include "main.h"

int print_hex_caps(unsigned int value, int num)
{
	unsigned int factor, remainder;

	if (value / 16 == 0)
	{
		remainder = value % 16;
		if (remainder > 9)
			_putchar(remainder + 55);
		else
			_putchar(remainder + '0');
		num++;
		return (num);
	}
	factor = value / 16;
	remainder = value % 16;
	num = num + print_hex_caps(factor, num);
	if (remainder > 9)
		_putchar(remainder + 55);
	else
		_putchar(remainder + '0');
	num++;
	return (num);
}

int print_hex_lower(unsigned int value, int num)
{
	unsigned int factor, remainder;

	if (value / 16 == 0)
	{
		remainder = value % 16;
		if (remainder > 9)
			_putchar(remainder + 87);
		else
			_putchar(remainder + '0');
		num++;
		return (num);
	}
	factor = value / 16;
	remainder = value % 16;
	num = num + print_hex_lower(factor, num);
	if (remainder > 9)
		_putchar(remainder + 87);
	else
		_putchar(remainder + '0');
	num++;
	return (num);
}

/**
 * print_hexadecimal - prints hexadecimal
 * @ap: list to be evaluated
 * Return: void
 */
int print_hexadecimal_lower(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);

	if (num < 0)
		num = -num;
	return (print_hex_lower(num, 0));
}

/**
 * print_hexadecimal - prints hexadecimal
 * @ap: list to be evaluated
 * Return: void
 */
int print_hexadecimal_caps(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);

	if (num < 0)
		num = -num;
	return (print_hex_caps(num, 0));
}
