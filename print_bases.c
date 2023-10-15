#include "main.h"

/**
* print_binary - converts to binary
* @args: binary num
* Return: return len of binary
*/

int print_binary(va_list args)
{
	char str[15];
	int len = 0;
	unsigned int num = va_arg(args, int);

	if (!num)
		return (-1);
	_itoa(num, str, 2);

	while (str[len] != '\0')
	{
		len++;
	}
	write(1, str, len);
	return (len);
}

/**
* print_percent - prints the term percent
* @args: char %
* Return: return 1;
*/
int print_percent(va_list args)
{
	char c = '%';
	(void)args;

	write(1, &c, 1);
	return (1);
}
