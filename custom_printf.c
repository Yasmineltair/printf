#include "main.h"

/**
 * _custom_printf - Custom printf function implementation
 * Handles format specifiers 'd' and 'i'.
 *
 * @format: a character string
 * @...: variable arguments
 * Return: the number of characters printed
 */
int _custom_printf(const char *format, ...)
{
	int char_print = 0;
	va_list list_of_args;

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(list_of_args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				print_char(*format, &char_print);
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(list_of_args, int);
				char num_str[12];

				sprintf(num_str, "%d", num);
				print_str(num_str, &char_print);
			}
			else
			{
				print_char(*format, &char_print);
			}
		}
		else
		{
			print_char(*format, &char_print);
		}
		format++;
	}

	va_end(list_of_args);
	return (char_print);
}
