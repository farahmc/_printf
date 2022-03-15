#include "main.h"

/**
 * _strlen- counts number of characters in string
 * @s: string to be counted
 *
 * Description: loop to count number of characters in string
 * that is lcated by a pointer
 *
 * Return: number of characters in string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;

	return (i);
}

/**
 * swap_char- swaps first and last chars
 * @a: first char
 * @b: last char
 *
 * Description: function to swap first and last
 * char, with a help in a temp variable after first swap
 *
 * Return: 0 is success
 *
 */

void swap_char(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * rev_string- reverse string
 * @s: string
 *
 * Description: function to reverse string
 * where beg and end are pointers to location
 * on a string, and reversed
 *
 * Return: 0 is success
 */

int print_reverse(va_list list)
{
	char *beg, *end, *s;

	s = va_arg(list, char *);
	beg = s;

	if (s == NULL)
		return (0);

	while (beg < end)
	{
		swap_char(beg, end);
		beg++;
		end--;
	}
	return(0);
}
