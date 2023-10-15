#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * print_char - prints char
 * @c: character
 * Return: retuns 1
 */

int  print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_str - prints a string
 * @s: string
 * Return: return the len of the string
 */

int print_str(char *s)
{
	int len, i;
	
	if (!s)
		s = "(null)";

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		print_char(s[i]);
	}
	return (len);
}

/**
* reverse - reverses a string
* @str: array
* @length: size of the array
*/

void reverse(char str[], int length)
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
 * @n: integer
 */

int print_int(int n)
{
	char str[20];
	int len;

	if (!n)
		return (-1);
	_itoa(n, str, 10);

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	write(1, str, len);
	return (0);
}
