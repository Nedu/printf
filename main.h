#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct op - Struct op
 *
 * @specifier: The specifier
 * @f: The function associated
 */
typedef struct specifiers
{
	char *specifier;
	int (*f)(va_list list);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
int specifier_char(va_list list);
int specifier_string(va_list list);
int specifier_percent(va_list list);
int specifier_int(va_list list);
int specifier_unsigned_int(va_list list);

#endif
