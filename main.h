#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/* these below are the print func */
int _putchar(char *c);
int _puts(char *str);

/**
* handler - also means the handler type
* @c: the handle letter
* *f: function pointer
*/
typedef struct handler
{
	char c;
	int (*f)(va_list args);
} hdt;

/* Declarations of .c files func*/
int _printf(const char *format, ...);
int print_char(char c);
int  print_str(char *s);
int print_int(int n);
char* _itoa(int num, char *str, int base);
int reverse(char str[], int length);
int (*to_print(char s))(va_list args);
int print_bin(unsigned int num);

#endif
