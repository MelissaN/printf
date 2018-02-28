#include "holberton.h"
/**
 * rot13 - encrypts string with rot13
 * @list: string to change
 * Return: modified string
 */
char *rot13(va_list list)
{
	int i = 0;
	char *str;
	char *nstr;

	str = va_arg(list, char *);

	nstr = malloc(sizeof(char) * (_strlen(str) + 1));
	if (nstr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm')
		{
			nstr[i] = str[i] + 13;
		}
		if (str[i] >= 'n' && str[i] <= 'z')
		{
			nstr[i] = str[i] - 13;
		}
		if (str[i] >= 'A' && str[i] <= 'M')
		{
			nstr[i] = str[i] + 13;
		}
		if (str[i] >= 'N' && str[i] <= 'Z')
		{
			nstr[i] = str[i] - 13;
		}
		i++;
	}

	nstr[i] = '\0';
	return (nstr);
}
