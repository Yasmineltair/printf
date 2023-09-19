#include "main.h"

/**
  * _printf - function that produces output
  * @format: a character string
  * Return: the number of characters printed
  */

int _printf(const char *format, ...)
{
int char_print = 0;
va_list list_of_args;

if (format == NULL || (format[0] == '%' && !format[1]))
	return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
	return (-1);
va_start(list_of_args, format);
while (*format)
{
	if (*format != '%')
	{
		char_print += print_char(*format);
	}
	else
	{
		format++;
	if (*format == '%')
	{
		 char_print += print_char(*format);
	}
	else if (*format == 'c')
	{
		char c = va_arg(list_of_args, int);

		char_print += print_char(c);
	}
	else if (*format == 's')
	{
		char *str = va_arg(list_of_args, char*);

		char_print += print_str(str);
	}
	}
	format++;
}

va_end(list_of_args);
return (char_print);
}
