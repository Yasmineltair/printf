#include "main.h"

/**
* print_buffer - function to print buffers
* @buffer: buffer array
* @buff_ind: buffer ind
*/
void print_buffer(char buffer[], int *buff_ind)
{
int i = 0;

if (*buff_ind > 0)
{
	while (i < *buff_ind)
	{
		write(1, buffer, i);
	}
}
*buff_ind = 0;
}
