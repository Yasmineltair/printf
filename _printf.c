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

if (format == NULL)
	return (-1);

va_start(list_of_args, format);

while (*format)
{
	if (*format != '%')
	{
		print_char(*format, &char_print);
	}
	else
	{
		format++;
	if (*format == '\0')
		break;
	else if (*format == '%')
	{
		print_char(*format, &char_print);
	}
	else if (*format == 'c')
	{
		char c = va_arg(list_of_args, int);

		print_char(c, &char_print);
	}
	else if (*format == 's')
	{
		char *str = va_arg(list_of_args, char*);

		print_str(str, &char_print);
		}
	}
	format++;
}
va_end(list_of_args);
return (char_print);
}
