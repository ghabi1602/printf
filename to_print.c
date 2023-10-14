#include "main.h"

/**
* to_print - get which print method
* @s: the string gotten from va_args
* Description: the function checks the the struct h_func
* and chooses which print function will be suitable for
* the handler.
*/

void (*to_print(char s))(va_list args)
{       
	int j;
	h_t h_func[] =
	{
		{'s', print_str},
		{'c', print_char},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	for (j = 0; j != '\0'; j++)
	{
		if (h_func[j].c[0] == s[0])
			h_func[j].f(va_list args);
	}
}
