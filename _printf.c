#include "main.h"
/**
 * _printf - function that emulates a real printf
 * @format: string that looks for extra arguments
 * Return: len
 */
int _printf(const char *format, ...)
{
	int idx, len = 0;
	va_list list;
	char mod[5] = {'c', 's', 'i', 'd', '\0'};

	if (format == NULL)
		return (-1);

	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	va_start(list, format);

	for (idx = 0; format[idx] != '\0'; idx++)
	{
		if (format[idx] == '%')
		{
			if (modvalue(mod, format[idx + 1]))
			{
				len += caseswitch(format[idx + 1], list);
				idx++;
			}
			else if (format[idx] == '%' && format[idx + 1] == '%')
			{
				len += _putchar('%');
				idx++;
				continue;
			}
			else
			{
				len += (_putchar(format[idx]));
			}
		}
	}
	va_end(list);
	return (len);
}
