#include "main.h"
int _printf(char *format, ...)
{
	char *p;
	int i;
	char *s;
	int len;

	/* Module 1: Initializing _printf arguments */
	va_list list;
	va_start(list, format);

	p = format;

	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			len += _putchar(*p);
			continue;
		}
		p++;

		/* Module 2: Fetching and executing arguments */
		switch(*p)
		{
			/* Fetch char argument */
			case 'c' : i = va_arg(list,int);
					   len += _putchar(i);
					   break;

					   /* Fetch Decimal/Integer argument */
			case 'd' : i = va_arg(list,int);
					   if(i<0)
					   {
						   i = -i;
						   len += _putchar('-');
					   }
					   _puts(convert(i,10));
					   break;

					   /* Fetch Octal representation */
			case 'o': i = va_arg(list,unsigned int);
					  len += _puts(convert(i,8));
					  break; 

					  /* Fetch string */
			case 's': s = va_arg(list,char *);
					  len += _puts(s);
					  break;

					  /* Fetch rev string */
			case 'r' : s = va_arg(list, char *);
					   len += print_rev(s);
					   break;

					   /* Fetch Hexadecimal representation */
			case 'x': i = va_arg(list,unsigned int);
					  len += _puts(convert(i,16));
					  break;
		}
	}
	/* Module 3: closing argument list to necessary clean-up */
	va_end(list);
	return (len);
}
