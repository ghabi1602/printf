#include "main.h"

/**
* print_bin - converts to binary
* @num: binary num
* Return: return len of binary
*/

int print_bin(unsigned int num)
{
	char str[15];
	int len = 0;

	_itoa(num, str, 2);

	while (str[len] != '\0')
	{
		len++;
	}
	write(1, str, len);
	return (len);
}
