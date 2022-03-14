#include "main.h"
#include <stdlib.h>

/**
 * print_binary - print binary numbers
 * @list: list of arguments
 * Return: numbers of binary printed
 */
int print_binary(va_list list)
{
	unsigned int number;
	int j;
	int i = 0;
	int output[32];

	number = va_arg(list, unsigned int);
	if (number == 0)
		return (_putchar('0'));
	while (number > 0)
	{
		output[i] = (number % 2);
		number = number / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(output[j] + '0');
	}
	return (i);
}

/**
 * print_unsigned_integer - print unsigned integer
 * @list: list of arguments
 * Return: numbers of digits printed
 */
int print_unsigned_integer(va_list list)
{
	unsigned int unsigned_number;
	int digit[10];
	int i = 0, j;

	unsigned_number = va_arg(list, unsigned int);
	if (unsigned_number == 0)
		return (_putchar('0'));
	while (unsigned_number > 0)
	{
		digit[i] = (unsigned_number % 10);
		unsigned_number = unsigned_number / 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digit[j] + '0');
	}
	return (i);
}

/**
 * print_octal - print octal numbers
 * @list: list of arguments
 * Return: numbers of digits printed
 */
int print_octal(va_list list)
{
    unsigned int octal_number;
    int digit[11];
    int i = 0, j;

    octal_number = va_arg(list, unsigned int);
    if (octal_number == 0)
		return (_putchar('0'));
	while (octal_number > 0)
	{
		digit[i] = (octal_number % 8);
		octal_number = octal_number / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digit[j] + '0');
	}
	return (i);
}
