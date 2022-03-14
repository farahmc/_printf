#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

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
  * print_roi13 - print encode ROI13 string
  * @list: list of arguments
  * Return: return the encoded string
  */
int print_roi13(va_list list)
{
	char *alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int indexStr = 0;
	int indexAl = 0;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		return (0);
	while (str[indexStr] != '\0')
	{
		indexAl = 0;
		while (alph[indexAl] != '\0')
		{
			if (str[indexStr] == alph[indexAl])
			{
				_putchar(rot[indexAl]);
				break;
			}
			indexAl++;
		}
		if (alph[indexAl] == '\0')
		{
			_putchar(str[indexStr]);
		}
		indexStr++;
	}
	return (indexStr);
}

