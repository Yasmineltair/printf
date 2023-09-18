#include "main.h"

/**
* print_buffer - function to print buffers
* @buffer: buffer array
* @buff_ind: buffer ind
*/
void print_buffer(char buffer[], int *buff_ind)
{
if (*buff_ind > 0)
{
int i = 0;

while (i < *buff_ind)
{
write(1, &buffer, 1);
i++;
}
}
*buff_ind = 0;
}
