#include "main.h"

/**
 * print_str - Print function and shows how to concatenate them.
 * @ap: list to be evaluated
 * Return: void
 */
int print_str(va_list ap)
{
	int count = 0;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		count = count + _putchar(*str);
		str++;
	}
	return (count);
}
