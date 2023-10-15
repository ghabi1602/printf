#include "main.h"
#include <stdarg.h>

/**
* _printf - print a text according to format
* @format: output format
*
* Return: return 0 on success
*/

int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;


	va_start(args, format);

	length = print_data(format, args);

	va_end(args);
	return (length);
}
