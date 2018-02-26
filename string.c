#include "holberton.h"
/**
 * print_s - takes string and return string
 * @list: string
 * Return: string
 */
char *print_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		return ("(null)");
	return (s);
}
