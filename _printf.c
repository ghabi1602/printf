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

	i = 0;
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++; /* move to the next iteration after the % */
			if (format[i] == '\0')
				break;		/* if iterations has reached the end*/
			switch (format[i])
			{
				case 'c':
					print_char(va_arg(args, int));
					break;
				case 's':
					print_str(va_arg(args, char *));
					break;
				case 'd':
					print_int(va_arg(args, int));
					break;
				case 'i':
					print_int(va_arg(args, int));
			}
			if (format[i] == '%')
				print_char('%'); /* handles if there is not flag attached */
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
