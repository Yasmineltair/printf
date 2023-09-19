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
	(*char_print)++;
	}
<<<<<<< HEAD
=======
	}
>>>>>>> 0ae33cdaba63ddd0242329831ada749eb33f50aa
	return (str_len);
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
