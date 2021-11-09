#include "main.h"
/**
 * printstr - function that prints a string
 * @s: string
 * Return: len
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
 * printchar - function that prints a char
 * @c: char
 * Return: 1
 */
int printchar(char c)
{
	_putchar(c);
	return (1);
}
/**
 * printnum - function that prints a number with putchar using recursion
 * @n: number
 * @counter: int that keeps track of the number of ints printed
 * Return: counter
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
 * _putchar - writes char c
 * @c: char
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
