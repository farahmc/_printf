#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct specifier - link the specifier to the related function
 * @spf: specifier
 * @func: the related function
 */

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
int print_percent(va_list list);

/* print int */
int print_integer(va_list list);

/* print binary */
int print_binary(va_list list);

/* get the bytes length of the given number with given base */
int bytes_len(unsigned int number, int base);

/* print the roi13 string */
/* int print_roi13(va_list list); */

/* print int */
/* int print_unsigned_integer(va_list list); */

#endif
