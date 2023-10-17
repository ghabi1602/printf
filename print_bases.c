#include "main.h"

/**
* print_binary - converts to binary
* @args: binary num
* Return: return len of binary
*/

int print_binary(va_list args)
{
	char *str;
	unsigned int num = va_arg(args, unsigned int);

	str = converter(num, 2, 0);

	return (_puts(str));
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

	_putchar(c);
	return (1);
}

/**
* print_rev - print reverse string
* @args: string literal
* Return: return len
*/

int print_rev(va_list args)
{
	char *st;
	int i, j = 0;

	st = va_arg(args, char *);
	if (st == NULL)
		st = ")llun(";
	for (i = 0; st[i] != '\0'; i++)
		;
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(st[i]);
		j++;
	}
	return (j);
}
