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
	int i, j;

	va_start(args, *format);

	i = 0;
	while(*format && format[i] != '\0')
	{
		j = 0;
		if (format[j] == '%')
		{
			format++; /* move to the next iteration after the % */
			switch (format[i])
			{
				case 'c': /* check if a char */
					_putchar(va_arg(args, char));
					break;
				case 's': /* check if a string*/
					_puts(va_arg(args, char *));
					/*printf("%s", va_arg(args, char *));*/
					break;
				default:
					_putchar('%'); /* handles if there is not flag attached */
					_puts(va_arg(args, char *));
					break;
			}
			j++;
		}
	i++;	
	}
	va_end(args);
	return (0);
}
