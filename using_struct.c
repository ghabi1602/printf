#include "main.h"
#include <stdarg.h>

/**
 * print_data - prints several data types
 * @format: string
 * @args: arguments
 * Return: int
 */
int print_data(const char *format, va_list args)
{
		hdt func_arr[] = {
			{'i', print_int},
			{'s', print_str},
			{'c', print_char},
			{'d', print_int},
			{'u', print_unsigned},
			{'x', print_hex},
			{'X', print_hex_big},
			{'b', print_binary},
			{'o', print_octal},
			{'R', print_rot13},
			{'r', print_rev},
			{'S', print_S_big},
			{'p', print_address},
			{'%', print_percent},
			{'\0', NULL},
		};
		int i = 0, j = 0, count = 0;

		while (format && format[i] != '\0')
		{
			j = 0;
			if (format[i] == '%')
			{
				i++;
				if (format[i] == '\0')
					break;
				while (func_arr[j].c != '\0')
					if (format[i] == func_arr[j].c)
						count += func_arr[j].f(args);
					else j++;
			}
			else
			{	print_char(format[i]);
				count++;}
			i++;
		}
		return (count);
}
