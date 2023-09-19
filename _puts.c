#include "main.h"

/**
  * print_str - function to print string
  * @str : string to print
  * @char_print: pointer to ch count
  */

void print_str(char *str, int *char_print)
{
	int str_len = 0;

	while (str[str_len] != '\0')
	{
	write(1, &str[str_len], 1);
	str_len++;
<<<<<<< HEAD
	(*char_print)++;
	}
=======
	}
	return (str_len);
>>>>>>> 12cb5b9849b3d20f9cbc458e16ef9064e3360f65
}

/**
  * print_char - function to print character
  * @c: character to print
  * @char_print: a pointer to ch counter
  */

void print_char(char c, int *char_print)
{
write(1, &c, 1);
(*char_print)++;
}
