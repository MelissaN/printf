#include "holberton.h"

char *print_s(va_list list)
{
	char *s;
	char *p;
	int strl;

	s = va_arg(list, char *);
	strl = _strlen(s);

	p = malloc(sizeof(char) * strl + 1);
	if (p == NULL)
		return (NULL);

	return (_strcpy(p,s));
}
