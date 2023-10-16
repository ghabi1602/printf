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
			{'r', print_rev},
			{'R', print_rot13},
			{'%', print_percent}
		};
		int i;
		int specs = 8;

		for (i = 0; i < specs; i++)
			if (func_arr[i].c == s)
				return (func_arr[i].f);
		return (NULL);
}
