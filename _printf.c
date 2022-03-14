#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
  * _printf - produce output according to a format
  * @format: 1st arguments containing characters and specifiers
  * Return: the numbers of characters printed, excluding null terminator
  */
int _printf(const char *format, ...)
{
	int i, j, count = 0;
	va_list vlist;
	t_specifier symbol[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"b", print_binary},
		{"d", print_integer},
		/*
		* {"R", print_roi13},
		* {"u", print_unsigned_integer},
		* comment out below 3 lines to test the function of print_char only
		* {"i", print_int},
		*/
		{NULL, NULL},
	};
	if (format == NULL)
		return (-1);

	va_start(vlist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			i++;
			j = 0;
			while (symbol[j].spf != NULL)
			{
				if (*(symbol[j].spf) == format[i])
					count += symbol[j].func(vlist);
				j++;
			}
			if (symbol[j].spf == NULL)
			{
				count += _putchar(format[i]);
			}
		}
	}
	va_end(vlist);
	return (count);
}
