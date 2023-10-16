#include "main.h"

/**
* _putchar - prints a char
* @c: character
* Return: return 1 if successfull
*/

int _putchar(char c)
{
	if (!c)
		return (-1);
	write(1, &c, 1);
	return (1);
}
