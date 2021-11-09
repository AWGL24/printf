#include "main.h"
/**
 *
 *
 */
int caseswitch(char ch, va_list list)
{
	int idx = 0;
	int hold;

	mod x[] = {
		{'s', printstr};
		{'c', _printchar};
		{'i', printnum};
		{'d', printnum};
		{'\0', NULL};
	}

	va_start(list);

	for (idx = 0; x[idx].l != '\0'; idx++)
	{
		if (x[idx].l == ch)
		{
			hold = x[idx].f(list);
			return (hold);
		}
	}
}
