#include "main.h"

/**
* _printf - print a text according to format
* @format: output format
*
* Return: return 0 on success
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i, j = 0, count = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	i = 0;
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++; /* move to the next iteration after the % */
			if (format[i] == '\0')
			{
				break;	/* if iterations has reached the end*/
			}
			switch (format[i])
			{
				case 'c':
					print_char(va_arg(args, int));
					count++;
					break;
				case 's':
					j = print_str(va_arg(args, char *));
					count += j;
					break;
				case '%':
					print_char('%');
					count++;
					break;
				case 'd':
					j = print_int(va_arg(args, int));
					count += j;
					break;
				case 'i':
					j = print_int(va_arg(args, int));
					count += j;
					break;
				default:
					print_char('%');
					print_char(format[i]);
			}
		}
		else
		{
			print_char(format[i]);
			count++;
		}
	i++;
	}
	va_end(args);
	return (count);
}
