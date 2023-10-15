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
	int i;
	int count = 0;

	va_start(args, format);

	if (format == NULL)
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
					print_str(va_arg(args, char *));
					count++;
					break;
				case '%':
					print_char('%');
					break;
				case 'd':
					print_int(va_arg(args, int));
					count++;
					break;
			}
		}
		else
		{
			print_char(format[i]);
		}
	i++;
	count++;
	}
	va_end(args);
	return (count);
}
