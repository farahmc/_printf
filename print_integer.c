#include "main.h"
#include <stdio.h>
/**
  * number_length - check the length of the integer
  * @num: number to check
  * Return: return the number length
  */
int number_length(int num)
{
	int i = 0;

	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

/**
 * _power - calculate the power of a number
 * @p: power number
 * @b: base number
 * Return: return result
 */
int _power(int b, int p)
{
	int i;
	int result = 1;

	for (i = 1; i <= p; i++)
	{
		result = result * b;
	}

	return (result);
}

/**
  * print_positive_number - print an positive integer using putchar
  * @pn: positive number to print
  * Return: return null
  */
void print_positive_number(int pn)
{
	int i = number_length(pn) - 1;
	int divider;
	int print_digits;

	while (i >= 0)
	{
		divider = _power(10, i);
		print_digits = (pn / divider);

		if (print_digits < 0)
		{
			print_digits = (print_digits * -1);
		}
		_putchar(print_digits + '0');
		pn = pn % divider;
		i--;
	}
}

/**
  * print_integer - print an integer using putchar
  * @list: parameter from list
  * Return: length
  */
int print_integer(va_list list)
{
	int n = va_arg(list, int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n > 0)
	{
		print_positive_number(n);
		return (number_length(n));
	}
	else
	{
		_putchar('-');
		print_positive_number(n);
		return (number_length(n) + 1);
	}
}

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
		j++;
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
