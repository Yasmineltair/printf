#include "main.h"

/**
  * print_str - function to print string
  * @str : string to print
  * Return: string length
  */

int print_str(char *str)
{
	int str_len = 0;

	while (str[str_len] != '\0')
	{
	write(1, &str[str_len], 1);
	str_len++;
	}
	return (str_len);
	}
}

/**
  * print_char - function to print character
  * @c: character to print
  * Return: success 1
  */

int print_char(char c)
{
write(1, &c, 1);
return (1);
}
