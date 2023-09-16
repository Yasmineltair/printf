#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _printf - Custom printf function.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)

{
	if (format == NULL)
		return (-1);

	va_list args;

	va_start(args, format);

	int char_printed = 0;

	while (*format)
	{
		if (*format != '%' || *(format + 1) == '\0')
		{
			write(1, format, 1);
			char_printed++;
		}
		else if (*(format + 1) == '%')
		{
			write(1, "%%", 2);
			char_printed += 2;
			format++;
		}
		else if (*(format + 1) == 'd' || *(format + 1) == 'i')
		{
			int num = va_arg(args, int);

			char buffer[12];

			int len = sprintf(buffer, "%d", num);

			write(1, buffer, len);
			char_printed += len;
			format++;
		}

		format++;
	}

	va_end(args);
	return (char_printed);
}

