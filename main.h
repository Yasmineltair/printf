#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

/* Function prototype for _printf */
int _printf(const char *format, ...);
void print_char(int c, int *char_print);
void print_str(char *str, int *char_print);

#endif /* MAIN_H */

