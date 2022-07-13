#include "main.h"

/**
 * print_STR - prints the formatted text
 * @ap: list to be evaluated
 * Return: the int
 */
int print_STR(va_list ap)
{
	unsigned int size;
	char *str;

	str = va_arg(ap, char *);
	size = 0;

	if (str == NULL)
		str = "(nil)";
	while (*str != '\0')
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			size += _putchar('\\');
			size += _putchar('x');
			size += _putchar('0');
			print_hex(*str, 55);
		}
		else
			size += _putchar(*str);
		str++;
	}
	return (size);
}
