#include "main.h"

/**
 * print_char - prints the character
 * @ap: list to be evaluated
 * Return: void
 */
int print_char(va_list ap)
{
	int ch = va_arg(ap, int);

	return (_putchar(ch));
}
