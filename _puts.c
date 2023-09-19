#include "main.h"

/**
  * print_str - function to print string
  * @str : string to print
  * Return: string length
  */

int print_str(char *str)
{
	char *start = str;

	while (*str)
	{
		print_char(*str++);
	}
	return (str - start);
}

/**
  * print_char - function to print character
  * @c: character to print
  * Return: 1 on success
  */

int print_char(int c)
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
return (1);
}
