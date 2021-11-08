#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *
 *
 */
int _puts(const char *s)
{
	int i = 0;

	while (s[i])
	{
		if (_putchar(s[i]) == EOF)
		{
			return (EOF);
		}
		i++;
	}

	return (1);
}
/**
 *
 *
 */
int printnum(int n, int count)
{
	unsigned int number;

	if (n < 0)
	{
		_putchar('-');
		count++;
		number = (n * -1);
	}
	else
		number = n;

	if (number / 10)
	{
		count = printnum(number / 10, count);
	}
	_putchar(number % 10 + '0');
	count++;
	return (count);
}
/**
 *
 *
 *
 */
int printstr(char *ch)
{
	int idx = 0;

	if (ch == NULL)
		ch = "(null)";

	while (ch[idx] != '\0')
	{
		_putchar(ch[idx]);
	}
	return (idx);
}
/**
 *
 *
 */
int print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i -= 1; i >= 0; i++)
	{
		return (s[i]);
	}
	_putchar('\n');
	return (0);
}
