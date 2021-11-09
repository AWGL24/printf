#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
typedef struct percentage {
	char l;
	int (*f)(va_list);
}mod;
int caseswitch(char ch, va_list list);
int _printf(const char *format, ...);
char* convert(unsigned int, int);
int _putchar(char c);
int printstr(char *s);
int printchar(char c);
int printnum(int n, int counter);
#endif /* MAIN_H */
