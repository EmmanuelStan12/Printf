0x11 - Printf

_printf is a custom implementation of the C programming function printf. This project is an application of the C programming knowledge that ALX Software Engineering cohort 7 students have learned since starting the program

Prototype: int _printf(const char *, ...);

Examples

String

Input: _printf("%s\n", 'This is a string.');

Output: This is a string.

Character

Input: _printf("The first letter in the alphabet is %c\n", 'A');

Output: The first letter in the alphabet is A

Integer

Input: _printf("There are %i dozens in a gross\n", 12);

Output: There are 12 dozens in a gross

Decimal:

Input: _printf("%d\n", 1000);

Output: 1000

Examples

Printing the string of chars "Hello, Holberton":

Use: _printf("Hello Hol%s.", "berton");
Output: Hello Holberton.

Printing an integer number;

Use: _printf("10 + 10 is equal to %d.", 20);
Output: 10 + 10 is equal to 20.

Printing a binary, octal and hexadecimal:

Use: _printf("10 in binary is [%b], in octal is [%o] and in hexadecimal is [%x]", 5, 5, 5);
Output: 10 in binary is [1010], in octal is [12] and in hexadecimal is [A]
Printing a string codified in ROT13:

Use: _printf("Hello in ROT13 is %R", "Hello");
Output: Hello in ROT13 is Urybb
Using flags and length tags:

Printing the string of chars "Hello, Holberton":

Use: _printf("2 * 2 = %+d and 5 * -5 = %+i", 4, -25);
Output: 2 * 2 = +4 and 5 * -5 = -25
Printing a long integer number and short integer number:

Use: _printf("1 million as a long int is %ld, but as a short int is %hd", 1000000, 1000000);
Output: 1 million as a long int is 1000000, but as a short int is 16960

