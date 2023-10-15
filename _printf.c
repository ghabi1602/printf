#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints to stdout
 * @format: string
 * Return: the length of the printed text
 */

int _printf(const char *format, ...)
{
	va_list args;
	int length;


	length = 0;

	va_start(args, format);

	if (format && format[0] != '\0')
	{
		length = print_data(format, args);
	}

	va_end(args);
	return (length);
}
