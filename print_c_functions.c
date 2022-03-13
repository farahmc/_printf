#include "main.h"

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
	if (str == NULL || *str == '\0')
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
int print_percent()
{
	_putchar('%');
	return (1);
}
