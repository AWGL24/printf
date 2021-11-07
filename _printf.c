#include "main.h"
int _printf(char *format, ...)
{
	char *p;
	int i;
	unsigned int u;
	char *s;

	/* Module 1: Initializing _printf arguments */
	va_list argp;
	va_start(argp, format);

	p = format;

	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			continue;
		}
		p++;

		/* Module 2: Fetching and executing arguments */
		switch(*p)
		{
			/* Fetch char arguments */
			case 'c' : i = va_arg(argp, int);
					   putchar(i);
					   break;

					   /* Fetch decimal/integer arguments */
			case 'd' : i = va_arg(argp, int);
					   if (i < 0)
					   {
						   i = -i;
						   putchar('-');
					   }
					   puts(convert(i, 10));
					   break;

					   /* Fetch Octal representation */
			case 'o' : i = va_arg(argp, unsigned int);
					   puts(convert(i, 8));
					   break;

					   /* Fetch string */
			case 's' : s = va_arg(argp, char *);
					   puts(s);
					   break;

					   /* Fetch hexadecimal representation */
			case 'x' : u = va_arg(argp, unsigned int);
					   puts(convert(u, 16));
					   break;

					   /* Fetch '%' */
			case '%' : _putchar('%');
					   break;
		}
	}
	/* Module 3: closing argument list to necessary clean-up */
	va_end(argp);
	return (0);
}
