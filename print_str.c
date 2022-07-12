#include "main.h"

/**
 * print_str - prints the string on screen
 * @ap: list to be evaluated
 * Return: void
 */
int print_str(va_list ap)
{
	int count = 0;
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";

	while (*str != '\0')
	{
		count = count + _putchar(*str);
		str++;
	}
	return (count);
}
