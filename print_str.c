#include "main.h"

/**
 * print_str - prints a string
 * @str: string to be printed
 * Return: void
 */
int print_substr(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
		i++;
	}
	return (i);
}

/**
 * print_str - prints the string on screen
 * @ap: list to be evaluated
 * Return: void
 */
int print_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	
	if (str == NULL)
		str = "(nil)";
	return (print_substr(str));
}
