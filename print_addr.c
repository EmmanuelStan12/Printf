#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int print_addr_hex(uintptr_t value)
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
	while (i < size)
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
			_putchar(k + 87);
		else
			_putchar(k + '0');
		i--;
	}
	free(p);
	return (size);
}

int print_addr(va_list ap)
{
	void *ptr = va_arg(ap, void *);
	uintptr_t num = (uintptr_t)ptr;
	int size;

	size = 0;
	size += _putchar('0');
	size += _putchar('x');
	size += print_addr_hex(num);
	return (size);
}
