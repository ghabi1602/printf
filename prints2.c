#include "main.h"

/**
* print_octal - print an octal num
* @args: input from va_list
* Return: the len
*/

int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str;
	int len = 0;

	str = converter(num, 8, 0);

	len += (_puts(str));

	return (len);
}

/**
* print_hex - print a hexadecimal val
* @args: input from va_list
* Return: return len
*/

int print_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str;
	int len = 0;

	str = converter(num, 16, 1);

	len += _puts(str);

	return (len);
}

/**
* print_HEX - print big hex
* @args: valist string literal
* Return: return the length
*/

int print_HEX(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str;
	int len = 0;

	str = converter(num, 16, 0);

	len += _puts(str);

	return (len);
}

/**
* print_unsigned - print the unsigned value of the num
* @args: args from va_list
* Return: the unsigned value
*/

int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = converter(num, 10, 0);

	return (_puts(str));
}

/**
* converter - convert an unsigned int to any base
* @num: an unsigned int
* @base: the base of num
* @lowercase: to check in case of big HEX values
* Return: return string
*/

char *converter(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char str[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";

	ptr = &str[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
