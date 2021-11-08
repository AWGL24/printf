#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(char *,...);
char* convert(unsigned int, int);
int _putchar(char c);
int _puts(const char *s);
void printnum(int n);
int printstr(char *ch);
int print_rev(char *s);
#endif /* HEADER_H */
