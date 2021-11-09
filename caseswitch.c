#include "main.h"
/**
 * caseswitch - function that select wich function we need
 * @letter: char the user inputs
 * @list: variadical arguments from printf
 * Return: lenght of what is printed
 */
int caseswitch(char letter, va_list list)
{
	switch (letter)
	{
		case 's':
			return (printstr(va_arg(list, char *)));

		case 'c':
			return (printchar((va_arg(list, int))));
		case 'i':
		case 'd':
			return (printnum((va_arg(list, int)), 0));
	}
	va_end(list);
	return (0);
}
