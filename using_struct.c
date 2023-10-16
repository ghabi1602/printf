#include "main.h"

/**
 * print_data - prints several data types
 * @s: char of the pointer function
 * Return: a function
 */
int (*print_data(char s))(va_list)
{
		hdt func_arr[] = {
			{'i', print_int},
			{'s', print_str},
			{'c', print_char},
			{'d', print_int},
			{'b', print_binary},
			{'%', print_percent}
		};
		int i = 6;

		for (i = 0; i < 5; i++)
			if (func_arr[i].c == s)
				return (func_arr[i].f);
		return (NULL);
}
