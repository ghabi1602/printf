#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints to stdout
 * @format: string
 * Return: the length of the printed text
 */

int _printf(const char *format, ...)
{
	int (*p_func)(va_list);
	va_list args;
	int length = 0;
	const char *p;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				length += _putchar('%');
				continue;
			}
			p_func = print_data(*p);

			length += (p_func)
				? p_func(args)
				: _printf("%%%c", *p);
		}
		else
		{
			length += _putchar(*p);
		}
	}

	va_end(args);
	return (length);
}
