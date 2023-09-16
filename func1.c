#include "main.h"

/**
  * print_char - function to print ch
  * @c: ch to print
  * @char_print: pointer to the print iterator
  *
  */

void print_char(char c, int *char_print)
{
	write(1, &c, 1);
	(*char_print)++;
}

/**
  * print_str - function to print string
  * @str: the string to print
  * @char_print: pointer to print iterator
  *
  */

void print_str(char *str, int *char_print)
{
	int str_len = 0;

	while (str[str_len] != '\0')
	{
		write(1, &str[str_len], 1);
		str_len++;
		(*char_print)++;
	}
}
