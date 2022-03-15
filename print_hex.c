#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_hex- convert a given unsigned int to hexadecimal (caps)
 * @list: parameter from va_list
 * Description: convert a given unsigned int to hexadecimal
 *(capital letters ABCDEF)
 * Return: number of integers
 */

int print_hex(va_list list)
{
	unsigned int num, remainder;
	int i, j = 0;
	char hexdec[8];

	num = va_arg(list, unsigned int);

	while (num != 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hexdec[j] = 48 + remainder;
			j++;
		}
		else
		{
			hexdec[j] = 55 + remainder;
			j++;
		}
		num = num / 16;
	}

	/* print in reverse */
	i = j - 1;
	while (i >= 0)
	{
		_putchar(hexdec[i]);
		i--;
	}
	return (j);
}

/**
 * print_hex_lower- convert a given unsigned int to hexadecimal (lower)
 * @list: parameter from va_list
 * Description: convert a given unsigned int to hexadecimal
 *(lowercase letters abcdef)
 * Return: number of integers
 */

int print_hex_lower(va_list list)
{
	unsigned int num, remainder;
	int i, j = 0;
	char hexdec[8];

	num = va_arg(list, unsigned int);

	while (num != 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hexdec[j] = 48 + remainder;
			j++;
		}
		else
		{
			hexdec[j] = 55 + remainder + 32;
			j++;
		}
		num = num / 16;
	}

	/* print in reverse */
	i = j - 1;
	while (i >= 0)
	{
		_putchar(hexdec[i]);
		i--;
	}
	return (j);
}
