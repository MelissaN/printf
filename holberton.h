#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h> /* va_list */
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */
#include <string.h> /* strlen  --> write own!!!!!!!!!!!!!! */

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
/*
print keyss[] = {
	{'c', print_c},
	{'s', print_s},
	{'d', print_d},
	{'i', print_i},
	{'\0', NULL}
	};*/

#endif
