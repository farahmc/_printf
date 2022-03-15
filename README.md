# README for _printf

A C program reproducing the printf function (formatted output conversion) as
part of the Holberton School curriculum for Low-Level Programming.

## Usage
To use the `_printf` function, compile all .c files in the repository and
include the header `main.h`.

### Compilation
All files are compiled with gcc using the following flags:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`

### Example
```
#include "main.h"

int main(void)
{
	int n = 9;
	_printf("My cat is %d years old.\n", n);

	return (0);
}
```

Output:
```
$ ./cat
My cat is 9 years old.
$
```

### Coding Style
All files are written in C programming language and follows the
[Betty coding style](https://github.com/holbertonschool/Betty/wiki).

## Description
### File Description
- **_printf.c**: contains the _printf function, which uses a struct to handle
conversion specifiers
- **main.h**: header file containing all prototypes
- **man_3_print**: manual for the **_printf** function, accessed via
man ./man_3_print
- **print_S_hex.c**: contains the function to print a string with non printable
characters converted to hexadecimal
- **print_hex.c**: contains the function to convert unsigned int to hexadecimal
(uppercase and lowercase)
- **print_integer.c**: contains the function to display integers
- **print_number.c**: contains functions to display unsigned int, binary and
octal numbers
- **print_string.c**: contains functions to display single characters,
strings as displayed and strings converted to rot13 encryption.

### Function Description
Our `_printf` function writes output to standard output. The format string
is composed of zero or more directives, and handles conversion specifiers
which specifies how arguments (accessed through `va_arg`)  are converted for
output.

**Prototype**
`int _printf(const char *format, ...);`