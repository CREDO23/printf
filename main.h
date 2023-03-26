#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
void __print_number__( int num, unsigned int base, char specifier );
void __print_string__(char *str, char c, char specifier);
char __format_tracker__(char c);
int _printf(const char *format, ...);

#endif
