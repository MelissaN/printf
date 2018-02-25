char *print_s(va_list list)
{
	char *s;
	char *p;
	int strl;
	char *dest;

	s = va_arg(list, int);
	strl = _strlen(s);

	p = malloc(sizeof(char) * strl + 1);
	if (p = NULL)
		return (NULL);
	
	p = _strcpy(dest, s);

	return (p);
}
