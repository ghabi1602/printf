#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* these below are the print func */
int _puts(char *str);

/**
* struct handler - also means the handler type
* @c: the handle letter
* @f: function pointer
*/
typedef struct handler
{
	char c;
	int (*f)(va_list args);
} hdt;

/* Declarations of .c files func*/
int (*print_data(char s))(va_list);
int _printf(const char *format, ...);
int print_char(va_list);
int  print_str(va_list);
int print_int(va_list);
char *_itoa(int num, char *str, int base);
int reverse(char str[], int length);
int (*to_print(char s))(va_list args);
int print_percent(va_list args);
int _putchar(char c);
int print_binary(va_list args);
int print_rev(va_list args);
int print_rot13(va_list args);
int check_int(char *s);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_octal(va_list args);
char *converter(unsigned long int num, int base, int lowercase);
int print_unsigned(va_list args);
int print_address(va_list args);
#endif
