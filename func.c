#include "main.h"
/**
 *
 *
 */
int printstr(char *s)
{
	int i;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
/**
 *
 *
 */
int printchar(char c)
{
	_putchar(c);
	return (1);
}
/**
 *
 *
 */
int printnum(int n, int counter)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		counter++;
		num = (n * -1);
	}
	else
		num = n;

	if (num / 10)
	{
		counter = printnum(num / 10, counter);
	}
	_putchar(num % 10 + '0');
	counter++;
	return (counter);
}
/**
 *
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
