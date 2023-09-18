#include "main.h"

/**
  * print_char - function to print ch
  * @c: ch to print
  * @char_print: pointer to the print iterator
  *
  */

void print_char(char c, int *char_print)
{
int buff_ind = 0;
char buffer[BUFF_SIZE];

buffer[buff_index++] = 'c';
if (buff_ind == BUFF_SIZE)
{
print_buffer(buffer, &buff_index)
char_print += buff_ind;
	}

/**
  * print_str - function to print string
  * @str: the string to print
  * @char_print: pointer to print iterator
  *
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
char_print += buff_ind;
}

/**
  * print_buffer - function to print buffers
  * @buffer: buffer array
  * @buff_ind: buffer index
  * Return: void
  */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
	{
		for (int i = 0; i < *buff_ind; i++)
		{
			write(1, buffer[i], 1);
		}
	}
	*buff_ind = 0;
}
