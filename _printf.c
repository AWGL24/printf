#include "main.h"
int _printf(char *format, ...)
{
	int i;
	int len;

	va_list list;
	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				len += printnum(format[i] + 1);
			}
			else if (format[i + 1] == 'c')
			{
				len += _putchar(format[i] + 1);
			}
			else if (format[i + 1] == 's')
			{
				len += _puts(format[i] + 1);
			}
		}
		else
		{
<<<<<<< HEAD
			_putchar(format[i]);
=======
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

			case 'i' : i = va_arg(list, int);
					   if (i < 0)
					   {
						   i = -i;
						   len += _putchar('-');
					   }
					   _puts(convert(i, 10));
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
			default:
					  continue;
					
>>>>>>> 7882ae0e72685a2dee3416111ca6746afafec22a
		}

	va_end(list);
	return (len);
}
