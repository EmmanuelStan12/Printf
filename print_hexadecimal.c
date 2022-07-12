#include "main.h"

/**
 * print_hexadecimal - prints a decimal in hexadecimal
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
 * print_hexadecimal - prints a decimal in hexadecimal
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
