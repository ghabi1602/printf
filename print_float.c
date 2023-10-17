#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * intToStr - converts an int to string
 * @x: integer
 * @str: array of chars
 * @d: number of decimals
 * Return: string i
 */

int intToStr(int x, char *str, int d)
{
	int i = 0;

	while (x)
	{
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}
	while (i < d)
		str[i++] = '0';
	reverse(str, i);
	str[i] = '\0';

	return (i);
}

/**
 * ftoa - converts float to a string
 * @n: float
 * @res: array of chars
 * @afterpoint: number of digits after the point
 * Return: void
 */

void ftoa(float n, char *res, int afterpoint)
{
	int ipart = (int)n;
	float fpart = n - (float)ipart;
	int i = intToStr(ipart, res, 0);

	if (afterpoint != 0)
	{
		res[i] = '.';
		fpart = fpart * _pow(10, afterpoint);
		intToStr((int)fpart, res + i + 1, afterpoint);
	}
}

/**
 * print_float - prints a float to stdout
 * @args: list of arguments
 * Return: int
 */

int print_float(va_list args)
{
	float n = va_arg(args, double);
	int len = 0, i;
	char str[20];
	char *s;

	if (n == 0)
		return (-1);

	ftoa(n, str, 6);
	len = 0;
	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * len);

	if (s == NULL)
	{
		free(s);
		return (-1);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	free(s);
	return (_puts(s));
}

/**
* _pow - get the power
* @base: the base of the expon.
* @exponent: the exponent of base
* Return: the pow of the base
*/

double _pow(double base, int exponent)
{
	double result = 1.0;
	int i;

	if (exponent >= 0)
	{
		for (i = 0; i < exponent; i++)
			result *= base;
	}
	else
	{
		for (i = 0; i > exponent; i--)
			result /= base;
	}

	return (result);
}
