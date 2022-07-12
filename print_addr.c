#include "main.h"

/**
 * print_hex - prints a value in hexadecimal
 * @value: value to be evaluated
 * @_case: case of the hex
 * Return: size of the hex
 */
int print_hex(uintptr_t value, char _case)
{
	uintptr_t factor;
	int size, i;
	char *p;

	size = 0;
	factor = value;
	while (factor != 0)
	{
		factor /= 16;
		size++;
	}
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (-1);
	i = 0;
	factor = value;
	while (factor != 0)
	{
		*(p + i) = factor % 16;
		factor /= 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		int k;

		k = *(p + i);
		if (k > 9)
			_putchar(k + _case);
		else
			_putchar(k + '0');
		i--;
	}
	free(p);
	return (size);
}

/**
 * print_addr - prints the address
 * @ap: list to be evaluated
 * Return: the length of the address
 */
int print_addr(va_list ap)
{
	void *ptr = va_arg(ap, void *);
	uintptr_t num = (uintptr_t)ptr;
	int size;

	size = 0;
	size += _putchar('0');
	size += _putchar('x');
	size += print_hex(num, 87);
	return (size);
}
