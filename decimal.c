#include "holberton.h"
char *_fun(int div, int length, int n)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char *) * length + 1);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
		i++;
	}
	while (div >= 1)
	{
		str[i] = ((n / div) + '0');
		n = n % div;
		div /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
char *print_d(va_list list)
{
	int length, div, temp, n;
	n = va_arg(list, int);
	temp = n;
	length = 0;
	div = 1;

	if (temp < 0)
	{
		temp *= -1;
	}
	while (temp > 0)
	{
		length += 1;
		div *= 10;
		temp /= 10;
	}
	div /= 10;
	return (_fun(div, length, n));
}
