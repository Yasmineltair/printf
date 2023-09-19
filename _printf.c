#include "main.h"
/**
  * _printf - function that produces output
  * @format: a character string
  * Return: the number of characters printed
  */
int _printf(const char *format, ...)
{
	int len = 0, i = 0;
	va_list list_of_args;

	if (format == NULL)
	return (-1);
va_start(list_of_args, format);
while (format[i])
{
	if (*format != '%')
	{
		len += print_char(format[i]);
	}
	else
	{
		if (format[i] == '%')
	{
		len += print_char(format[i]);
	}
	else if (format[i] == 'c')
	{
		char c = va_arg(list_of_args, int);

		len += print_char(c);
	}
	else if (format[i] == 's')
	{
		char *str = va_arg(list_of_args, char*);

		len += print_str(str);
	}
		else
		{
			print_char(format[i]);
		}
	}
	i++;
}
va_end(list_of_args);
return (i);
}
