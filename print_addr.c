#include "main.h"

int print_hex(long unsigned int value, int num)
{
        long unsigned int factor, remainder;

        if (value / 16 == 0)
        {
                remainder = value % 16;
                if (remainder > 9)
                        _putchar(remainder + 87);
                else
                        _putchar(remainder + '0');
		num++;
                return (num);
        }
        factor = value / 16;
        remainder = value % 16;
        num = num + print_hex(factor, num);
        if (remainder > 9)
                _putchar(remainder + 87);
        else
                _putchar(remainder + '0');
	num++;
        return (num);
}

int print_addr(va_list ap)
{
	void *ptr = va_arg(ap, void *);
	uintptr_t num = (uintptr_t)ptr;
	int i;

	_putchar('0');
	_putchar('x');
	i = print_hex(num, 0);
	return (i + 2);
}
