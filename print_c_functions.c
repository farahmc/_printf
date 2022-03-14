#include "main.h"
#include <stdlib.h>

/**
  * print_char - print characters
  * @list: list of arguments
  * Return: return 1.
  *
  */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));

	return (1);
}

/**
  * print_str - print a string
  * @list: list of arguments
  * Return: return numbers of character printed
  *
  */
int print_str(va_list list)
{
	int i = 0;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - print percent symbol
 * @list: list of arguments
 * Return: numbers of percent printed
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * bytes_len - get the bytes length of the given number with given base
 * @number: given number
 * @base: base
 * Return: length
 */
int bytes_len(unsigned int number, int base)
{
	unsigned int i = 0;

	while (number > 0)
	{
		number = number / base;
		i++;
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
	unsigned int number;
	int length, j;
	int i = 0;
	char *str;

	number = va_arg(list, unsigned int);
	if (number == 0)
		return (_putchar('0'));
	length = bytes_len(number, 2);
	str = malloc(sizeof(char) * length + 1);
	if (str == NULL)
	{
		return (-1);
	}
	while (number > 0)
	{
		if (number % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		number = number / 2;
		i++;
	}
	str[i] = '\0';
	for (j = length; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	free(str);
	return (length);
}
