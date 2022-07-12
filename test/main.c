#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int _len;
    int len;
    unsigned int ui;
    void *addr;

    _len = _printf("Let's try to printf a simple sentence.\n");
    len = printf("Let's try to printf a simple sentence.\n");

    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", _len, _len);
    printf("Length:[%d, %i]\n", len, len);
 
    printf("Starts here");
    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);   
    _len = _printf("Negative:[%d]\n", -762534);
    len = printf("Negative:[%d]\n", -762534);
    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);
    _len = _printf("Unsigned:[%u]\n", ui);
    len = printf("Unsigned:[%u]\n", ui);
    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);
    _len = _printf("Unsigned octal:[%o]\n", ui);
    len = printf("Unsigned octal:[%o]\n", ui);
    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);
    _len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);
    _len = _printf("Character:[%c]\n", 'H');
    len = printf("Character:[%c]\n", 'H');
    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);
    _len = _printf("String:[%s]\n", "I am a string !");
    len = printf("String:[%s]\n", "I am a string !");
    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);
    _len = _printf("Address:[%p]\n", addr);
    len = printf("Address:[%p]\n", addr);
    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);
    _len = _printf("Percent:[%%]\n");
    len = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("Len:[%d]\n", _len);
    printf("Len:[%d]\n", len);
    return (0);
}
