#include <unistd.h>
#include "main.h"

/**
 * print_char - prints char
 * @c: character
 */
void print_char(char c)
{
	write(1, &c, 1);
}
/**
 * print_str - prints a string
 * @s: string
 */
void print_str(char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		write(1, &s[i], 1);
	}
}
/**
 * print_int - prints an int
 * @n: integer
 */
void print_int(int n)
{

}
