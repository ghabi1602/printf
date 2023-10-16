#include "main.h"
#include <limits.h>

/**
 * print_char - prints char
 * @args: character
 * Return: retuns 1
 */

int  print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_str - prints a string
 * @args: string
 * Return: return the len of the string
 */

int print_str(va_list args)
{
	int len, i;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		write(1, &s[i], 1);
	}
	return (len);
}

/**
* reverse - reverses a string
* @str: array
* @length: size of the array
* Return: return the length
*/

int reverse(char str[], int length)
{
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (length);
}

/**
 * _itoa - converts an int into a string
 * @num: integer
 * @str: string
 * @base: integer
 * Return: returs the string str
 */

char *_itoa(int num, char *str, int base)
{
	int i = 0;
	int isNegative = 0;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (num < 0 && base == 10)
	{
		isNegative = 1;
		num = -num;
	}

	while (num != 0)
	{
		int rem = num % base;

		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}

	if (isNegative)
		str[i++] = '-';

	str[i] = '\0';
	reverse(str, i);
	return (str);
}

/**
 * print_int - prints an int
 * @args: integer
 * Return: return 0 and -1 depending
 */

int print_int(va_list args)
{
	char str[20];
	int len;
	char *num_str;
	char zero = 0;
	int n = va_arg(args, int);
	int r;

	if (n == 0)
	{
		zero = '0';
		len = _putchar(zero);
	}
	num_str = _itoa(n, str, 10);

	if (!check_int(num_str))
		return (-1);

	r = INT_MAX;
	if (n < -r || n > r)
		return (-1);
	if (!n)
		return (-1);

	len = 0;
	len = _puts(num_str);
	return (len);
}
