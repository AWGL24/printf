#include "main.h"
/**
 * printstr - function that prints a string
 * @list: parameter
 * Return: len
 */
int printstr(va_list list)
{
	char *s;
	int i;

	s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
/**
 * printchar - function that prints a char
 * @list: parameter
 * Return: 1
 */
int printchar(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}
/**
 * printnum - function that prints a number with putchar using recursion
 * @list: parameter
 * Return: count
 */
int printnum(va_list list)
{
	int num = 0, i = 0;
	int count = 0;
	int arr[13];
	unsigned int n;

	num = va_arg(list, int);

	if (num < 0)
	{
		count += _putchar('-');
		n = (num * -1);
	}
	else
		n = num;

	if (n == 0)
	{
		count += _putchar(n + '0');
		return (count);
	}

	while (n != 0)
	{
		arr[i] = n % 10;
		n = n / 10;
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		count += _putchar(arr[i] + '0');
	}
	return (count);
}
/**
 * _putchar - writes char c
 * @c: char
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
