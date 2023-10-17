#include "main.h"

/**
 * print_address - prints addr in hex form
 * @args: va_list ars
 * Return: number of char printed
 */

int print_address(va_list args)
{
	char *str;
	unsigned long int adr = va_arg(args, unsigned long int);

	register int len = 0;

	if (!adr)
		return (_puts("(nil)"));
	str = converter(adr, 16, 1);
	len += _puts("0x");
	len += _puts(str);
	return (len);
}

/**
* print_S - print non printable
* @args: the args to work with
* Return: the len of str
*/

int print_S(va_list args)
{
	int i, len = 0;
	char *res;
	char *s = va_arg(args, char *);

	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			len += 2;
			res = converter(s[i], 16, 0);
			if (!res[1])
				len += _putchar('0');
			len += _puts(res);
		}
		else
			len += _putchar(s[i]);
	}
	return (len);
}
