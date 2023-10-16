#include "main.h"

/**
 * check_int - checks if integer
 * @num_str: string
 * Return: int
 */
int check_int(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
		len++;

	for (i = 1; i < len; i++)
		if (s[i] < 48 || s[i] > 57)
			return (0);
	return (1);
}

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
* Return: the len of str
*/

int _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: length of the elements printed
 */

int print_rot13(va_list args)
{
	int a = 0, i, j;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(args, char *);

	while (*(s + a) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + a) == letters[i])
			{
				*(s + a) = rot13[i];
				break;
			}
		}
		a++;
	}
	_puts(s);
	return (a);
}
