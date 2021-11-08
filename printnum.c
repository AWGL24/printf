#include "main.h"
/**
 *
 *
 */
void printnum(int n)
{
	int a = n / 10;

	if (n > 9)
	{
		n -= 10 * a;
		printnum(a);
	}
	_putchar('0' + n);
}
