#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h> /* va_list */
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */

/* helper functions */
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/* printf functions */
int _printf(const char *format, ...);
char *print_s(va_list list);
char *print_c(va_list list);

typedef struct types
{
	char id;
	char* (*func)(va_list);
} print;

#endif
