#include <stdarg.h>
#include "main.h"

/**
 * func_exe - executes the right function
 * @c: character
 * @args: argument
 * Return: void
 */
int func_exe(const char *format, va_list args, int position)
{
	int i = 0, count = 0;

	while (i < position)
	{
		switch (format[i])
		{
			case 'd':
				va_arg(args, int);
				break;
			case 's':
				va_arg(args, char *s);
				break;
			case 'c':
				va_arg(args, char);
				break;

		}
		i++;
	}
	switch (format[i])
	{
		case 'd':
			count += print_int(va_arg(args, int));
			break;
		case 's':
			count += print_str(va_arg(args, char *));
			break;
		case 'c':
			print_char(va_arg(args, char));
			count++;
			break;
	}
	return (count);
}
