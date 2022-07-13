#include "main.h"

/**
 * print_rot13 - prints the rotated string by 13
 * @ap: list to be evaluated
 * Return: the length of string printed
 */
int print_rot13(va_list ap)
{
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *equivalent = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;
	int size;

	size = 0;
	str = va_arg(ap, char *);
	if (str  == NULL)
	{
		str = "(nil)";
		while (*str != '\0')
		{
			size += _putchar(*str);
			str++;
		}
		return (size);
	}
	while (*str != '\0')
	{
		int i;

		for (i = 0; letters[i] != '\0'; i++)
		{
			if (*str == letters[i])
			{
				size += _putchar(equivalent[i]);
				break;
			}
			if (letters[i + 1] == '\0')
				size += _putchar(*str);
		}
		str++;
	}
	return (size);
}
