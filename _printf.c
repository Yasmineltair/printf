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
	else if (*format == 'd' || *format == 'i')
	{
		int num = va_arg(list_of_args, int);

		print_int(num, &char_print);
		}

	}
	format++;
}
va_end(list_of_args);
return (char_print);

/**
 * print_int - function to print an integer
 * @num: the integer to print
 * @char_print: pointer to print iterator
 */

void print_int(int num, int *char_print)
{
	char buffer[OUTPUT_BUF_SIZE];
	
	int i = 0;
	
	int is_negative = 0;

	if (num == 0)
	{
		print_char('0', char_print);
		return;
	}
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}
	while (num != 0)
	{
		buffer[i++] = num % 10 + '0';
		num = num / 10;
	}
	if (is_negative)
	{
		buffer[i++] = '-';
	}
	for (i = i - 1; i >= 0; i--)
	{
		print_char(buffer[i], char_print);
	}
}
