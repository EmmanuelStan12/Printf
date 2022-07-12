#include "main.h"
#include <stdio.h>

/**
 * _printf - prints a given string
 * @format: the format of the string to be printed
 * Return: the integer
 */
int _printf(char *format, ...)
{
	int i;
	va_list ap;
	int size;
	identifier_type types[] = {
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsignedint},
		{'x', print_hexadecimal_lower},
		{'X', print_hexadecimal_caps},
		{'o', print_octadecimal},
		{'s', print_str},
		{'p', print_addr},
		{'i', print_int}
	};

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	i = 0;
	size = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			char c = format[i + 1];
			int j = 0;

			if (c == '%')
			{
				size = size + _putchar('%');
				i++;
			}
			else
			{
				while (j < 9)
				{
					if (types[j].type == c)
					{
						size = size + types[j].print(ap);
						i++;
						break;
					}
					j++;
				}
				if (j >= 9)
				{
					size = size + _putchar('%');
					size = size + _putchar(c);
					i++;
				}
			}
		}
		else
		{
			size = size + _putchar(format[i]);
		}
		i++;
	}
	_putchar(-1);
	va_end(ap);
	return (size);
}
