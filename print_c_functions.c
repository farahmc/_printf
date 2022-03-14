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
	return (_putchar(va_arg(list, int)));
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
	return (write(1, "%", 1));
}

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
	int output[64];

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
