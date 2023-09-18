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
write(1, &buffer[0], *buff_ind);
*buff_ind = 0;
}
}
