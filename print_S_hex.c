#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_2_hex - print last two digit of hexadecimal
  * @num: the number to print
  * Return: return the number of characters printed
  */
int print_2_hex(unsigned int num)
{
	unsigned int remainder;
	int j = 0;
	char hexdec[8];

	while (num > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
			hexdec[j] = 48 + remainder;
		else
			hexdec[j] = 55 + remainder;
		j++;
		num = num / 16;
	}

	if (j == 0)
	{
		_putchar('0');
		_putchar('0');
	}
	else if (j == 1)
	{
		_putchar('0');
		_putchar(hexdec[0]);
	}
	else
	{
		_putchar(hexdec[1]);
		_putchar(hexdec[0]);
	}

	return (2);
}

/**
  * print_S - Non printable characters with \x and hex
  * @list: list of arguments
  * Return: return the number of characters printed
  */
int print_S(va_list list)
{
	char *str;
	int i = 0;
	int count = 0;

	str = va_arg(list, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			print_2_hex(str[i]);
			count = count + 4;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}

	return (count);
}
