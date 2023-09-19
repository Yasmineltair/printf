#include "main.h"

/**
  * print_str - function to print string
  * @str : string to print
  * @char_print: print iterator
  * Return: void
  */

void print_str(char *str, int char_print)
{
	int str_len = 0;

	while (str[str_len] != '\0')
	{
	str_len++;
	print_char(*str++, &char_print);
	char_print += str_len;
	}
}

/**
  * print_char - function to print character
  * @c: character to print
  * @char_print: print iterator
  * Return: 1 on success
  */

void print_char(int c, int *char_print)
{
static int i;
static char buf[BUFF_SIZE];

if (c != BUF_FLUSH)
{
	if (i >= BUFF_SIZE)
	{
		write(1, buf, i);
	i = 0;
	}
	buf[i++] = c;
	}
else if (i > 0)
{
	i = 0;
}
(*char_print)++;
}
