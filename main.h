#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

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
void print_char(char c);
void print_str(char *s);
void print_int(int n);
char* _itoa(int num, char *str,int base);
void reverse(char str[], int length);
int (*to_print(char s))(va_list args);

#endif
