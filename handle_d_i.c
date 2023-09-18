#include "main.h"

/**
 * handle_d - Handle the 'd' conversion specifier
 *
 * @args: The va_list containing the argument
 */
void handle_d(va_list args)
{
	int num = va_arg(args, int);
	
	printf("%d", num);
}

/**
 * handle_i - Handle the 'i' conversion specifier
 *
 * @args: The va_list containing the argument
 */
void handle_i(va_list args)
{
	int num = va_arg(args, int);

	printf("%d", num);
}
