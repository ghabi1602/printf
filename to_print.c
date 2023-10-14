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
	int num_handle, j;
	h_t h_func[] =
	{
		{'s', print_str},
		{'c', print_char},
		{'d', print_int},
		{'i', print_int}
	};

	num_handle = 4;
	for (j = 0; j < num_handle; j++)
	{
		if (h_func[i].c[0] == s[0])
			h_func[i].f(va_list args);
	}
}
