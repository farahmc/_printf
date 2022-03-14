#include "main.h"
#include <stdlib.h>

/**
 * print_number_convert - conver integer to binary/unsigned int/octal
 * @list: list of arguments
 * @base: base
 * Return: numbers of digits printed
 */
int print_number_convert(va_list list, int base)
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
		output[i] = (number % base);
		number = number / base;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(output[j] + '0');
	}
	return (i);
}

/**
 * print_binary - print binary numbers
 * @list: list of arguments
 * Return: numbers of binary printed
 */
int print_binary(va_list list)
{
	return (print_number_convert(list, 2));
}

/**
 * print_unsigned_integer - print unsigned integer
 * @list: list of arguments
 * Return: numbers of digits printed
 */
int print_unsigned_integer(va_list list)
{
	return (print_number_convert(list, 10));
}

/**
 * print_octal - print octal numbers
 * @list: list of arguments
 * Return: numbers of digits printed
 */
int print_octal(va_list list)
{
	return (print_number_convert(list, 8));
}
