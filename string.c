#include "holberton.h"

char *print_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);

	return (s);
}
