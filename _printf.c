#include "main.h"
int _printf(char *format, ...)
{
	int i;
	int len;

	va_list list;
	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				len += printnum(format[i] + 1);
			}
			else if (format[i + 1] == 'c')
			{
				len += _putchar(format[i] + 1);
			}
			else if (format[i + 1] == 's')
			{
				len += _puts(format[i] + 1);
			}
		}
		else
		{
			_putchar(format[i]);
		}

	va_end(list);
	return (len);
}
