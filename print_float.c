#include <math.h>
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * intToStr - converts an int to string
 * @x: integer
 * @str: array of chars
 * @d: number of decimals
 */
int intToStr(int x, char *str, int d) 
{ 
    int i = 0; 
    while (x) { 
        str[i++] = (x % 10) + '0'; 
        x = x / 10; 
    } 
 
    // If number of digits required is more, then 
    // add 0s at the beginning 
    while (i < d) 
        str[i++] = '0'; 
 
    reverse(str, i); 
    str[i] = '\0'; 
    return i; 
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
    // Extract integer part
    int ipart = (int)n;

    // Extract floating part
    float fpart = n - (float)ipart;

    // convert integer part to string
    int i = intToStr(ipart, res, 0);

    // check for display option after point
    if (afterpoint != 0) {
        res[i] = '.'; // add dot

        // Get the value of fraction part upto given no.
        // of points after dot. The third parameter
        // is needed to handle cases like 233.007
        fpart = fpart * pow(10, afterpoint);

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
	float n = va_arg(args, float);
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
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	_puts(s);
	free(s);
	return (len);
}
