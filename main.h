#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
 *struct percentage - struct that finds the percentage
 * @f: function pointers
 * @l: character
 *
 */
typedef struct percentage
{
	char l;
	int (*f)(va_list list);
} mod;
int caseswitch(char ch, va_list list);
int _printf(const char *format, ...);
int _putchar(char c);
int printstr(va_list list);
int printchar(va_list list);
int printnum(va_list list);
#endif /* MAIN_H */
