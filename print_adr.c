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
