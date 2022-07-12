#include "main.h"

/**
 * convert_int - converts an int
 * @value: value to be converted
 * Return: size of the int
 */
int convert_int(unsigned int value, int num)
{
	unsigned int factor, remainder;

	if (value == 0)
		return (num);
	factor = value / 2;
	remainder = value % 2;
	num = num + convert_int(factor, num);
	_putchar(remainder + '0');
	return (num);
}

/**
 * print_binary - prints a binary
 * @value: the value to be converted
 * Return: size of the int
 */
int print_binary(va_list ap)
{
	unsigned int result, num;

	result = va_arg(ap, unsigned int);
	num = convert_int(result, 0);
	return (num);
}
