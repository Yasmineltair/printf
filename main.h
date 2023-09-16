#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* Function prototype for _printf */
int _printf(const char *format, ...);

/* Function prototypes for additional print functions */
void print_char(char c, int *char_print);
void print_str(char *str, int *char_print);

/* Declaration of 'd' and 'i' conversion specifiers */
void print_int(int num, int *char_print);

#endif /* MAIN_H */

