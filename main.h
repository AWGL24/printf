#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int caseswitch(char ch, va_list list);
int _printf(const char *format, ...);
int _putchar(char c);
int printstr(char *s);
int printchar(char c);
int printnum(int n, int counter);
int modvalue(char mod[], char idx);
#endif /* MAIN_H */
