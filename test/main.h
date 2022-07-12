#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <stddef.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>

/**
 * struct identifier_type - structure definition
 * @type: the type to be printed
 * @print: the function to be ran against the type
 */
typedef struct identifier_type
{
	char type;
	int (*print)(va_list ap);
} identifier_type;

int print_addr(va_list ap);

int print_char(va_list ap);

int print_hexadecimal_lower(va_list ap);

int print_hexadecimal_caps(va_list ap);

int print_octadecimal(va_list ap);

int print_str(va_list ap);

int print_int(va_list ap);

int _putchar(char c);

int print_unsignedint(va_list ap);

int _size(unsigned int num, int divisor);

int _printf(char *format, ...);

#endif
