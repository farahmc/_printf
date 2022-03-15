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
		{"c", print_char}, {"s", print_str},
		{"%", print_percent}, {"b", print_binary},
		{"d", print_integer}, {"i", print_integer},
		{"u", print_unsigned_integer}, {"o", print_octal},
		{"X", print_hex_upper}, {"x", print_hex_lower},
		{"S", print_S}, {"R", print_roi13},
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
			if (format[i + 1] == '\0')
				return (count + 1);
			j = 0;
			while (symbol[j].spf != NULL)
			{
				if (*(symbol[j].spf) == format[i + 1])
				{
					i++;
					count += symbol[j].func(vlist);
					break;
				}
				j++;
			}
		}
	}
	va_end(vlist);
	return (count);
}
