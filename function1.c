#include "main.h"

/*
 * Handle the 'd' and 'i' conversion specifiers.
 * These specifiers print decimal (base 10) integers.
 * You don’t have to handle flag characters, field width,
 * precision, or length modifiers.
 */

if (*format == 'd' || *format == 'i')
{
	int num = va_arg(list_of_args, int);

	print_int(num, &char_print);
}

