#include "main.h"

/**
* _putchar - prints a char
* @c: character
* Return: return 1 if successfull
*/

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
* _puts - prints string  of char
* @s: pointer to str
* Return the len of str
*/

int _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
