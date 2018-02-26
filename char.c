#include "holberton.h"
/**
 * print_c - returns char as string
 * @list: char
 * Return: String verion of char
 */
char *print_c(va_list list)
{
	char *s;

	s = malloc(sizeof(char *) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = va_arg(list, int);
	s[1] = '\0';
	if (s == NULL)
		return ("(null)");
	return (s);
}
