#include "main.h"
int _printf(const char *format, ...)
{
	va_list list;
	int n;

	va_start(list, format);
	n = _printf(format, list, 0);
	va_end(list);
	return (n);
}
