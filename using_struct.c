#include "main.h"

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
			{'%', print_percent},
			{'\0', NULL}
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
				{
					if (format[i] == func_arr[j].c)
					{
						count += func_arr[j].f(args);
						break;
					}
					else
					{
						j++;
					}
				}
			}
			else
			{
				write(1, &format[i], 1);
				count++;
			}
			i++;
		}
		return (count);
}
