#include "main.h"
/**
  * print_char - function to print ch
  * @c: ch to print
  * @char_print: pointer to the print iterator
  */
void print_char(char c, int *char_print)
{
	int buff_ind = 0;
	char buffer[BUFF_SIZE];

buffer[buff_ind++] = 'c';
if (buff_ind == BUFF_SIZE)
{
print_buffer(buffer, &buff_ind);
char_print += buff_ind;
	}
/**
  * print_str - function to print string
  * @str: the string to print
  * @char_print: pointer to print iterator
  */
void print_str(char *str, int *char_print)
{
	int buff_ind = 0;
	char buffer[BUFF_SIZE];

buffer[buff_ind++] = *str;
str++;
if (buff_ind == BUFF_SIZE)
{
		print_buffer(buffer, &buff_ind);
}
char_print += buff_ind;
}
