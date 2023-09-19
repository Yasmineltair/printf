#include "main.h"

/**
  * print_str - function to print string
  * @str : string to print
  * @char_print: print iterator
  * Return: void
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

/**
  * print_char - function to print character
  * @c: character to print
  * @char_print: print iterator
  */

void print_char(char c, int *char_print)
{
write(1, &c, 1);
(*char_print)++;
}
