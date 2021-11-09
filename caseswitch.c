#include "main.h"
/**
 * caseswitch - function that select wich function we need
 * @letter: char the user inputs
 * @list: variadical arguments from printf
 * Return: lenght of what is printed
 */
int caseswitch(char ch, va_list list)
{
	int hold = 0, idx;

	mod x[] = {
		{'c', printchar},
		{'s', printstr},
		{'i', printnum},
		{'d', printnum},
		{'\0', NULL},
	};

	for (idx = 0; x[idx].l != '\0'; idx++)
	{
		if (x[idx].l == ch)
		{
			hold += x[idx].f(list);
			return (hold);
		}
	}
	hold += _putchar('%');
	hold += _putchar(ch);
	return (hold);
}
