#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define BUFF_SIZE 1024
#define BUF_FLUSH -1

/* Function prototype for _printf */
int _printf(const char *format, ...);

/* Function prototypes for additional print functions */
int print_char(char c);
int print_str(char *str);

#endif /* MAIN_H */
