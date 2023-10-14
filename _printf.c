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

	va_start(args, *format);

	i = 0;
	while(*format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;	 	/* move to the next iteration after the % */
			if (format[i] == '\0')
				break;		/* if iterations has reached the end*/
			
			switch (format[i])
			{
				case 'c': /* check if a char */
					putchar(va_arg(args, int));
					break;
				case 's': /* check if a string*/
					puts(va_arg(args, char *));
					break;
				case 'd':
					putchar(va_arg(args, int));
					break;
				case 'i':
					putchar(va_arg(args, int));
					break;
				default:
					putchar('%'); /* handles if there is not flag attached */
					break;
			}
		}
		else
		{
			puts(format);
		}
	i++;	
	}
	va_end(args);
	return (0);
}
