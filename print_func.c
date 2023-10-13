#include "main.h"

/**
* print_char - prints the a character
* @c: var for the arg
*/

int _putchar(char *c)
{
	return (write(1, &c, 1));
}


/**
* _puts - prints a string
*  @str: the pointer to the string
*
* Return: return the string count
*/

int _puts(char *str)
{
	int i;

	for(i = 0; (str[i] = '\0'); i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
