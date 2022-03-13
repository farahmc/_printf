#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

typedef struct specifier
{
	char *spf;
	int (*func)(va_list);
} t_specifier;

/* prodcuce output according to a format */
int _printf(const char *format, ...);

/* writes the character c to stdout */
int _putchar(char c);

/* print characters */
int print_char(va_list list);

/* print a string */
int print_str(va_list list);

/* print a percent */
int print_percent();

/* print int */
int print_integer(va_list list);

#endif
