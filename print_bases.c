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
	unsigned int num = va_arg(args, unsigned int);

	if (!num)
		return (-1);
	if (num == -num)
		num *= num;
	_itoa(num, str, 2);

	while (str[len] != '\0')
	{
		len++;
	}
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

	write(1, &c, 1);
	return (1);
}

/**
* print_rev - print reverse string
* @args: string literal
* Return: return len
*/

int print_rev(va_list args)
{
	char *s = va_arg(args, char *);
	int length = 0;
	int start = 0;
	int end;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length;
	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
	_puts(s);
	return (length);
}
