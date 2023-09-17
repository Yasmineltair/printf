#include "main.h"

/**
  * print_char - function to print ch
  * @c: ch to print
  * @char_print: pointer to the print iterator
  *
  */

void print_char(char c, int *char_print)
{
char buf[OUTPUT_BUF_SIZE];
if (c == BUF_FLUSH || *char_print >= OUTPUT_BUF_SIZE)
{
	if (c != BUF_FLUSH)
		buf[*char_print++] = c;
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
