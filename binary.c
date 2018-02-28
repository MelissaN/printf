#include "holberton.h"

/**
 * itob - change int to binary
 * @list: int to change
 * Return: string with binary
 */

char *itob(va_list list)
{
	int j = 0, twos = 1;
	int i, k;
	char *s;

	k = va_arg(list, int);
	i = k;

	/* malloc up to max int in binary */
	s = malloc(sizeof(char) * 33);
	if (s == NULL)
		return (NULL);

	/* find biggest power of 2 it's divisible by */
	while (k > 1)
	{
		k /= 2;
		twos *= 2;
	}

	/* divide down and store binary num */
	while (twos > 0)
	{
		if (i / twos < 2)
			s[j++] = (i / twos + '0');
		else
			s[j++] = (0 + '0');
		i %= twos;
		twos /= 2;
	}
	s[j] = '\0';

	return (s);
}
