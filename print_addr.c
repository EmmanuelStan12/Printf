#include "main.h"

void print_addr_hex(long unsigned int value)
{
        long unsigned int factor, remainder;

        if (value / 16 == 0)
        {
                remainder = value % 16;
                if (remainder > 9)
                        _putchar(remainder + 87);
                else
                        _putchar(remainder + '0');
                return;
        }
        factor = value / 16;
        remainder = value % 16;
        print_addr_hex(factor);
        if (remainder > 9)
                _putchar(remainder + 87);
        else
                _putchar(remainder + '0');
}

int print_addr(va_list ap)
{
	void *ptr;
	uintptr_t num = (uintptr_t)ptr;
	int size;
	char *s = "(nil)";

	ptr = va_arg(num, void *);
	size = 0;
	if (ptr == NULL)
	{
		while (*s != NULL)
		{
			_putchar(*s);
			s++;
			size++;
		}
		return (size);
	}

	_putchar('0');
	_putchar('x');
	size = _size(num, 16);
	print_addr_hex(num);
	return (size + 2);
}
