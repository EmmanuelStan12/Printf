#include "main.h"

/**
 * _formatted_print - prints a formatted type
 * @format: format of the string
 * @size: size of the string
 * @types: types of the types of values to be evaluated
 * @i: current pointer value
 * @ap: variable list
 * Return: void
 */
void _formatted_print(char *format, int *size, identifier_type types[],
		int i, va_list ap)
{
	char c = format[i + 1];
	int j = 0;

	if (c == '%')
		*size = *size + _putchar('%');
	else if (c != '\0')
	{
		while (j < 10)
		{
			if (types[j].type == c)
			{
				*size = *size + types[j].print(ap);
				break;
			}
			j++;
		}
		if (j >= 10)
		{
			*size += _putchar('%');
			*size += _putchar(c);
		}
	}
}

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Return: the integer
 */
int _printf(char *format, ...)
{
	int i = 0, size = 0;
	va_list ap;
	identifier_type types[] = {
		{'c', print_char},
		{'d', print_d},
		{'u', print_unsignedint},
		{'x', print_hexadecimal_lower},
		{'X', print_hexadecimal_caps},
		{'o', print_octadecimal},
		{'s', print_str},
		{'p', print_addr},
		{'i', print_i},
		{'b', print_binary}
	};

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			_formatted_print(format, &size, types, i, ap);
			i++;
		}
		else
			size += _putchar(format[i]);
		i++;
		va_end(ap);
	}
	return (size);
}
