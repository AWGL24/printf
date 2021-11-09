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

	if (format == NULL)
		return (-1);

	va_start(list, format);

	if (list == NULL)
		return (-1);

	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	for (idx = 0; format[idx] != '\0'; idx++)
	{
		if (format[idx] == '%' && format[idx + 1] != '\0')
		{
			if (format[idx + 1] == '%')
			{
				len += _putchar(format[idx++]);
			}
			else
			{
				len += caseswitch(format[++idx], list);
			}
		}
		else
		{
			if (format[idx] == '%' && format[idx + 1] == '\0')
				return (-1);
			len += _putchar(format[idx]);
		}
	}
	va_end(list);
	return (len);
}
