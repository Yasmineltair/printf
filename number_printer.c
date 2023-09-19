#include "main.h"

/**
 * print_int - Print an integer.
 *
 * @num: The integer to print.
 * @char_print: Pointer to the character count.
 *
 * This function prints an integer to the standard output.
 * If the integer is negative, it prints a minus sign '-' first.
 * It then converts the integer into its string representation
 * and prints each digit from left to right.
 */
void print_int(int num, int *char_print)
{
	char buffer[32];
	int printed = 0;

	if (num < 0)
	{
		putchar('-');
		printed++;
		num = -num;
	}

	int i = 0;

	do
	{
		buffer[i++] = '0' + (num % 10);
		num /= 10;
		printed++;
	} while (num > 0);

	for (int j = i - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
	}

	*char_print += printed;
}

/**
 * print_uint - Print an unsigned integer.
 *
 * @num: The unsigned integer to print.
 * @char_print: Pointer to the character count.
 *
 * This function prints an unsigned integer to the standard output.
 * It converts the integer into its string representation
 * and prints each digit from left to right.
 */
void print_uint(unsigned int num, int *char_print)
{
	char buffer[32];
	int printed = 0;

	int i = 0

	do
	{
		buffer[i++] = '0' + (num % 10);
		num /= 10;
		printed++;
	} while (num > 0);

	for (int j = i - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
	}

	*char_print += printed;
}

/**
 * print_octal - Print an octal number.
 *
 * @num: The octal number to print.
 * @char_print: Pointer to the character count.
 *
 * This function prints an octal number to the standard output.
 * It converts the octal number into its string representation
 * and prints each digit from left to right.
 */
void print_octal(unsigned int num, int *char_print)
{
	char buffer[32];
	int printed = 0;

	int i = 0;

	do
	{
		buffer[i++] = '0' + (num % 8);
		num /= 8;
		printed++;
	} while (num > 0);

	for (int j = i - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
	}

	*char_print += printed;
}

/**
 * print_hex - Print a hexadecimal number.
 *
 * @num: The hexadecimal number to print.
 * @uppercase: Whether to print in uppercase (1) or lowercase (0).
 * @char_print: Pointer to the character count.
 *
 * This function prints a hexadecimal number to the standard output.
 * It converts the hexadecimal number into its string representation
 * and prints each digit from left to right. If `uppercase` is 1,
 * it prints uppercase letters (A-F), otherwise lowercase (a-f).
 */
void print_hex(unsigned int num, int uppercase, int *char_print)
{
	char buffer[32];
	int printed = 0;

	const char *hex_chars = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	int i = 0;

	do
	{
		buffer[i++] = hex_chars[num % 16];
		num /= 16;
		printed++;
	} while (num > 0);

	for (int j = i - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
	}

	*char_print += printed;
}

/**
 * print_char - Print a character.
 *
 * @c: The character to print.
 * @char_print: Pointer to the character count.
 *
 * This function prints a single character to the standard output.
 */
void print_char(char c, int *char_print)
{
	write(1, &c, 1);
	(*char_print)++;
}

