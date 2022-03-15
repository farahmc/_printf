#include "main.h"

/**
  * _strlen - returns th length of a string
  * @s: string to check
  * Return: return the length
  */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}

/**
 * print_rev_string - print the reverse string
 * @list: list of arguments
 * Return: length
 */
int print_rev_string(va_list list)
{
	char *str;
	int i, length;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	length = _strlen(str);
	for (i = length; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	return (length);
}
